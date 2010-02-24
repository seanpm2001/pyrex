/* Generated by Pyrex */

#define PY_SSIZE_T_CLEAN
#include "Python.h"
#include "structmember.h"
#ifndef PY_LONG_LONG
  #define PY_LONG_LONG LONG_LONG
#endif
#if PY_VERSION_HEX < 0x02050000
  typedef int Py_ssize_t;
  #define PY_SSIZE_T_MAX INT_MAX
  #define PY_SSIZE_T_MIN INT_MIN
  #define PyInt_FromSsize_t(z) PyInt_FromLong(z)
  #define PyInt_AsSsize_t(o)	PyInt_AsLong(o)
#endif
#if !defined(WIN32) && !defined(MS_WINDOWS)
  #ifndef __stdcall
    #define __stdcall
  #endif
  #ifndef __cdecl
    #define __cdecl
  #endif
#endif
#ifdef __cplusplus
#define __PYX_EXTERN_C extern "C"
#else
#define __PYX_EXTERN_C extern
#endif
#include <math.h>


typedef struct {PyObject **p; int i; char *s; long n;} __Pyx_StringTabEntry; /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
static char **__pyx_f;

static char __pyx_mdoc[] = "Welcome to the parrot module. It is currently resting.";

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t); /*proto*/

static PyObject *__Pyx_CreateClass(PyObject *bases, PyObject *dict, PyObject *name, char *modname); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from docstrings */


/* Declarations from implementation of docstrings */

struct __pyx_obj_10docstrings_SuperParrot {
  PyObject_HEAD
};


static PyTypeObject *__pyx_ptype_10docstrings_SuperParrot = 0;

static char __pyx_k1[] = "Parrot";
static char __pyx_k2[] = "Standard Norwegian Blue.";
static char __pyx_k3[] = "docstrings";
static char __pyx_k4[] = "admire_plumage";

static PyObject *__pyx_n_Parrot;
static PyObject *__pyx_n_admire_plumage;
static PyObject *__pyx_n_docstrings;

static PyObject *__pyx_k2p;

static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {&__pyx_n_Parrot, 1, __pyx_k1, sizeof(__pyx_k1)},
  {&__pyx_n_admire_plumage, 1, __pyx_k4, sizeof(__pyx_k4)},
  {&__pyx_n_docstrings, 1, __pyx_k3, sizeof(__pyx_k3)},
  {&__pyx_k2p, 0, __pyx_k2, sizeof(__pyx_k2)},
  {0, 0, 0, 0}
};



/* Implementation of docstrings */

static PyObject *__pyx_f_10docstrings_zap(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_10docstrings_zap[] = "Wake up polly.";
static PyObject *__pyx_f_10docstrings_zap(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_polly = 0;
  PyObject *__pyx_v_volts = 0;
  PyObject *__pyx_r;
  static char *__pyx_argnames[] = {"polly","volts",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OO", __pyx_argnames, &__pyx_v_polly, &__pyx_v_volts)) return 0;
  Py_INCREF(__pyx_v_polly);
  Py_INCREF(__pyx_v_volts);

  __pyx_r = Py_None; Py_INCREF(Py_None);
  Py_DECREF(__pyx_v_polly);
  Py_DECREF(__pyx_v_volts);
  return __pyx_r;
}

static PyObject *__pyx_f_10docstrings_6Parrot_admire_plumage(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_10docstrings_6Parrot_admire_plumage[] = "Lovely, ain't it?";
static PyMethodDef __pyx_mdef_10docstrings_6Parrot_admire_plumage = {"admire_plumage", (PyCFunction)__pyx_f_10docstrings_6Parrot_admire_plumage, METH_VARARGS|METH_KEYWORDS, __pyx_doc_10docstrings_6Parrot_admire_plumage};
static PyObject *__pyx_f_10docstrings_6Parrot_admire_plumage(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_r;
  static char *__pyx_argnames[] = {"self",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_self)) return 0;
  Py_INCREF(__pyx_v_self);

  __pyx_r = Py_None; Py_INCREF(Py_None);
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_tp_new_10docstrings_SuperParrot(PyTypeObject *t, PyObject *a, PyObject *k) {
  PyObject *o = (*t->tp_alloc)(t, 0);
  if (!o) return 0;
  return o;
}

static void __pyx_tp_dealloc_10docstrings_SuperParrot(PyObject *o) {
  (*o->ob_type->tp_free)(o);
}

static struct PyMethodDef __pyx_methods_10docstrings_SuperParrot[] = {
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_SuperParrot = {
  0, /*nb_add*/
  0, /*nb_subtract*/
  0, /*nb_multiply*/
  0, /*nb_divide*/
  0, /*nb_remainder*/
  0, /*nb_divmod*/
  0, /*nb_power*/
  0, /*nb_negative*/
  0, /*nb_positive*/
  0, /*nb_absolute*/
  0, /*nb_nonzero*/
  0, /*nb_invert*/
  0, /*nb_lshift*/
  0, /*nb_rshift*/
  0, /*nb_and*/
  0, /*nb_xor*/
  0, /*nb_or*/
  0, /*nb_coerce*/
  0, /*nb_int*/
  0, /*nb_long*/
  0, /*nb_float*/
  0, /*nb_oct*/
  0, /*nb_hex*/
  0, /*nb_inplace_add*/
  0, /*nb_inplace_subtract*/
  0, /*nb_inplace_multiply*/
  0, /*nb_inplace_divide*/
  0, /*nb_inplace_remainder*/
  0, /*nb_inplace_power*/
  0, /*nb_inplace_lshift*/
  0, /*nb_inplace_rshift*/
  0, /*nb_inplace_and*/
  0, /*nb_inplace_xor*/
  0, /*nb_inplace_or*/
  0, /*nb_floor_divide*/
  0, /*nb_true_divide*/
  0, /*nb_inplace_floor_divide*/
  0, /*nb_inplace_true_divide*/
  #if Py_TPFLAGS_DEFAULT & Py_TPFLAGS_HAVE_INDEX
  0, /*nb_index*/
  #endif
};

static PySequenceMethods __pyx_tp_as_sequence_SuperParrot = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_SuperParrot = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_SuperParrot = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_10docstrings_SuperParrot = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "docstrings.SuperParrot", /*tp_name*/
  sizeof(struct __pyx_obj_10docstrings_SuperParrot), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_10docstrings_SuperParrot, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_SuperParrot, /*tp_as_number*/
  &__pyx_tp_as_sequence_SuperParrot, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_SuperParrot, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_SuperParrot, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE, /*tp_flags*/
  "Special high-performance model.", /*tp_doc*/
  0, /*tp_traverse*/
  0, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_10docstrings_SuperParrot, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_10docstrings_SuperParrot, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};

static struct PyMethodDef __pyx_methods[] = {
  {"zap", (PyCFunction)__pyx_f_10docstrings_zap, METH_VARARGS|METH_KEYWORDS, __pyx_doc_10docstrings_zap},
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC initdocstrings(void); /*proto*/
PyMODINIT_FUNC initdocstrings(void) {
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("docstrings", __pyx_methods, __pyx_mdoc, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  Py_INCREF(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyType_Ready(&__pyx_type_10docstrings_SuperParrot) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 12; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "SuperParrot", (PyObject *)&__pyx_type_10docstrings_SuperParrot) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 12; goto __pyx_L1;}
  __pyx_ptype_10docstrings_SuperParrot = &__pyx_type_10docstrings_SuperParrot;

  /* "/Local/Projects/D/Pyrex/Source/Tests/5/docstrings.pyx":6 */
  __pyx_1 = PyDict_New(); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 6; goto __pyx_L1;}
  __pyx_2 = PyTuple_New(0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 6; goto __pyx_L1;}
  if (PyDict_SetItemString(__pyx_1, "__doc__", __pyx_k2p) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 6; goto __pyx_L1;}
  __pyx_3 = __Pyx_CreateClass(__pyx_2, __pyx_1, __pyx_n_Parrot, "docstrings"); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 6; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_2 = PyCFunction_NewEx(&__pyx_mdef_10docstrings_6Parrot_admire_plumage, 0, __pyx_n_docstrings); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L1;}
  __pyx_4 = PyMethod_New(__pyx_2, 0, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  if (PyObject_SetAttr(__pyx_3, __pyx_n_admire_plumage, __pyx_4) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L1;}
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  if (PyObject_SetAttr(__pyx_m, __pyx_n_Parrot, __pyx_3) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 6; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/5/docstrings.pyx":12 */
  return;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  __Pyx_AddTraceback("docstrings");
}

static char *__pyx_filenames[] = {
  "docstrings.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
}

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t) {
	while (t->p) {
		*t->p = PyString_FromStringAndSize(t->s, t->n - 1);
		if (!*t->p)
			return -1;
		if (t->i)
			PyString_InternInPlace(t->p);
		++t;
	}
	return 0;
}

static PyObject *__Pyx_CreateClass(
	PyObject *bases, PyObject *dict, PyObject *name, char *modname)
{
	PyObject *py_modname;
	PyObject *result = 0;
	
	py_modname = PyString_FromString(modname);
	if (!py_modname)
		goto bad;
	if (PyDict_SetItemString(dict, "__module__", py_modname) < 0)
		goto bad;
	result = PyClass_New(bases, dict, name);
bad:
	Py_XDECREF(py_modname);
	return result;
}

#include "compile.h"
#include "frameobject.h"
#include "traceback.h"

static void __Pyx_AddTraceback(char *funcname) {
	PyObject *py_srcfile = 0;
	PyObject *py_funcname = 0;
	PyObject *py_globals = 0;
	PyObject *empty_tuple = 0;
	PyObject *empty_string = 0;
	PyCodeObject *py_code = 0;
	PyFrameObject *py_frame = 0;
	
	py_srcfile = PyString_FromString(__pyx_filename);
	if (!py_srcfile) goto bad;
	py_funcname = PyString_FromString(funcname);
	if (!py_funcname) goto bad;
	py_globals = PyModule_GetDict(__pyx_m);
	if (!py_globals) goto bad;
	empty_tuple = PyTuple_New(0);
	if (!empty_tuple) goto bad;
	empty_string = PyString_FromString("");
	if (!empty_string) goto bad;
	py_code = PyCode_New(
		0,            /*int argcount,*/
		0,            /*int nlocals,*/
		0,            /*int stacksize,*/
		0,            /*int flags,*/
		empty_string, /*PyObject *code,*/
		empty_tuple,  /*PyObject *consts,*/
		empty_tuple,  /*PyObject *names,*/
		empty_tuple,  /*PyObject *varnames,*/
		empty_tuple,  /*PyObject *freevars,*/
		empty_tuple,  /*PyObject *cellvars,*/
		py_srcfile,   /*PyObject *filename,*/
		py_funcname,  /*PyObject *name,*/
		__pyx_lineno,   /*int firstlineno,*/
		empty_string  /*PyObject *lnotab*/
	);
	if (!py_code) goto bad;
	py_frame = PyFrame_New(
		PyThreadState_Get(), /*PyThreadState *tstate,*/
		py_code,             /*PyCodeObject *code,*/
		py_globals,          /*PyObject *globals,*/
		0                    /*PyObject *locals*/
	);
	if (!py_frame) goto bad;
	py_frame->f_lineno = __pyx_lineno;
	PyTraceBack_Here(py_frame);
bad:
	Py_XDECREF(py_srcfile);
	Py_XDECREF(py_funcname);
	Py_XDECREF(empty_tuple);
	Py_XDECREF(empty_string);
	Py_XDECREF(py_code);
	Py_XDECREF(py_frame);
}
