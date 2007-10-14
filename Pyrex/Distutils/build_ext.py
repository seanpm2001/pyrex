"""Pyrex.Distutils.build_ext

Implements a version of the Distutils 'build_ext' command, for
building Pyrex extension modules."""

# This module should be kept compatible with Python 2.1.

__revision__ = "$Id:$"

import sys, os, string, re
from types import *
from distutils.core import Command
from distutils.errors import *
from distutils.sysconfig import customize_compiler, get_python_version
from distutils.dep_util import newer, newer_group
from distutils import log
from distutils.dir_util import mkpath
try:
	from Pyrex.Compiler.Main \
		import CompilationOptions, \
			   default_options as pyrex_default_options, \
			   compile as pyrex_compile
	from Pyrex.Compiler.Errors import PyrexError
except ImportError:
	PyrexError = None

from distutils.command import build_ext as _build_ext

extension_name_re = _build_ext.extension_name_re

show_compilers = _build_ext.show_compilers

class build_ext(_build_ext.build_ext):

	description = "build C/C++ and Pyrex extensions (compile/link to build directory)"

	sep_by = _build_ext.build_ext.sep_by
	user_options = _build_ext.build_ext.user_options
	boolean_options = _build_ext.build_ext.boolean_options
	help_options = _build_ext.build_ext.help_options

	# Add the pyrex specific data.
	user_options.extend([
		('pyrex-cplus', None,
		 "generate C++ source files"),
		('pyrex-create-listing', None,
		 "write errors to a listing file"),
		('pyrex-include-dirs=', None,
		 "path to the Pyrex include files" + sep_by),
		('pyrex-c-in-temp', None,
		 "put generated C files in temp directory"),
		('pyrex-gen-pxi', None,
			"generate .pxi file for public declarations"),
		])

	boolean_options.extend([
		'pyrex-cplus', 'pyrex-create-listing', 'pyrex-c-in-temp'
	])

	def initialize_options(self):
		_build_ext.build_ext.initialize_options(self)
		self.pyrex_cplus = 0
		self.pyrex_create_listing = 0
		self.pyrex_include_dirs = None
		self.pyrex_c_in_temp = 0
		self.pyrex_gen_pxi = 0

	def finalize_options (self):
		_build_ext.build_ext.finalize_options(self)
		if self.pyrex_include_dirs is None:
			self.pyrex_include_dirs = []
		elif type(self.pyrex_include_dirs) is StringType:
			self.pyrex_include_dirs = \
				string.split(self.pyrex_include_dirs, os.pathsep)
	# finalize_options ()

	def build_extensions(self):
		# First, sanity-check the 'extensions' list
		self.check_extensions_list(self.extensions)
		for ext in self.extensions:
			ext.sources = self.pyrex_sources(ext.sources, ext)
			self.build_extension(ext)

	def pyrex_sources(self, sources, extension):

		"""
		Walk the list of source files in 'sources', looking for Pyrex
		source (.pyx) files.  Run Pyrex on all that are found, and return
		a modified 'sources' list with Pyrex source files replaced by the
		generated C (or C++) files.
		"""

		if PyrexError == None:
			raise DistutilsPlatformError, \
				  ("Pyrex does not appear to be installed "
				   "on platform '%s'") % os.name

		new_sources = []
		pyrex_sources = []
		pyrex_targets = {}

		# Setup create_list and cplus from the extension options if
		# Pyrex.Distutils.extension.Extension is used, otherwise just
		# use what was parsed from the command-line or the configuration file.
		# cplus will also be set to true is extension.language is equal to
		# 'C++' or 'c++'.
		#try:
		#	create_listing = self.pyrex_create_listing or \
		#						extension.pyrex_create_listing
		#	cplus = self.pyrex_cplus or \
		#				extension.pyrex_cplus or \
		#				(extension.language != None and \
		#					extension.language.lower() == 'c++')
		#except AttributeError:
		#	create_listing = self.pyrex_create_listing
		#	cplus = self.pyrex_cplus or \
		#				(extension.language != None and \
		#					extension.language.lower() == 'c++')
		
		create_listing = self.pyrex_create_listing or \
			getattr(extension, 'pyrex_create_listing', 0)
		cplus = self.pyrex_cplus or getattr(extension, 'pyrex_cplus', 0) or \
				(extension.language and extension.language.lower() == 'c++')
		pyrex_gen_pxi = self.pyrex_gen_pxi or getattr(extension, 'pyrex_gen_pxi', 0)

		# Set up the include_path for the Pyres compiler:
		#	1.	Start with the command line option.
		#	2.	Add in any (unique) paths from the extension
		#		pyrex_include_dirs (if Pyrex.Distutils.extension is used).
		#	3.	Add in any (unique) paths from the extension include_dirs
		includes = self.pyrex_include_dirs
		try:
			for i in extension.pyrex_include_dirs:
				if not i in includes:
					includes.append(i)
		except AttributeError:
			pass
		for i in extension.include_dirs:
			if not i in includes:
				includes.append(i)

		# Set the target_ext to '.c'.  Pyrex will change this to '.cpp' if
		# needed.
		if cplus:
			target_ext = '.cpp'
		else:
			target_ext = '.c'

		# Decide whether to drop the generated C files into the temp dir
		# or the source tree.

		if not self.inplace and (self.pyrex_c_in_temp
				or getattr(extension, 'pyrex_c_in_temp', 0)):
			target_dir = os.path.join(self.build_temp, "pyrex")
		else:
			target_dir = ""

		for source in sources:
			(base, ext) = os.path.splitext(source)
			if ext == ".pyx":			  # Pyrex source file
				new_sources.append(os.path.join(target_dir, base + target_ext))
				pyrex_sources.append(source)
				pyrex_targets[source] = new_sources[-1]
			else:
				new_sources.append(source)

		if not pyrex_sources:
			return new_sources

		for source in pyrex_sources:
			target = pyrex_targets[source]
#			source_time = os.stat(source).st_mtime
#			try:
#				target_time = os.stat(target).st_mtime
#				newer = source_time > target_time
#			except EnvironmentError:
#				newer = 1
#			if newer:
			if self.force or newer(source, target):
				log.info("pyrexc %s --> %s", source, target)
				self.mkpath(os.path.dirname(target))
				options = CompilationOptions(pyrex_default_options, 
					use_listing_file = create_listing,
					include_path = includes,
					output_file = target,
					cplus = cplus,
					generate_pxi = pyrex_gen_pxi)
				result = pyrex_compile(source, options=options)

		return new_sources

	# pyrex_sources ()

# class build_ext
