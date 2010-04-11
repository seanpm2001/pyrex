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

static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb); /*proto*/

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from tryfinally */


/* Declarations from implementation of tryfinally */





static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {0, 0, 0, 0}
};



/* Implementation of tryfinally */

static PyObject *__pyx_f_10tryfinally_f(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_10tryfinally_f(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_a = 0;
  PyObject *__pyx_v_b = 0;
  PyObject *__pyx_v_c = 0;
  PyObject *__pyx_v_x = 0;
  int __pyx_v_i;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  static char *__pyx_argnames[] = {"a","b","c","x",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OOOO", __pyx_argnames, &__pyx_v_a, &__pyx_v_b, &__pyx_v_c, &__pyx_v_x)) return 0;
  Py_INCREF(__pyx_v_a);
  Py_INCREF(__pyx_v_b);
  Py_INCREF(__pyx_v_c);
  Py_INCREF(__pyx_v_x);

  /* "/Local/Projects/D/Pyrex/Source/Tests/4/tryfinally.pyx":3 */
  __pyx_1 = PyNumber_Add(__pyx_v_b, __pyx_v_c); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 3; goto __pyx_L1;}
  Py_DECREF(__pyx_v_a);
  __pyx_v_a = __pyx_1;
  __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/4/tryfinally.pyx":5 */
  /*try:*/ {

    /* "/Local/Projects/D/Pyrex/Source/Tests/4/tryfinally.pyx":6 */
    __pyx_r = Py_None; Py_INCREF(Py_None);
    goto __pyx_L2;

    /* "/Local/Projects/D/Pyrex/Source/Tests/4/tryfinally.pyx":7 */
    __Pyx_Raise(__pyx_v_a, 0, 0);
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 7; goto __pyx_L3;}
  }
  /*finally:*/ {
    int __pyx_why;
    PyObject *__pyx_exc_type, *__pyx_exc_value, *__pyx_exc_tb;
    int __pyx_exc_lineno;
    __pyx_why = 0; goto __pyx_L4;
    __pyx_L2: __pyx_why = 3; goto __pyx_L4;
    __pyx_L3: {
      __pyx_why = 4;
      Py_XDECREF(__pyx_1); __pyx_1 = 0;
      PyErr_Fetch(&__pyx_exc_type, &__pyx_exc_value, &__pyx_exc_tb);
      __pyx_exc_lineno = __pyx_lineno;
      goto __pyx_L4;
    }
    __pyx_L4:;
    __pyx_1 = PyNumber_Subtract(__pyx_v_a, __pyx_v_b); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L5;}
    Py_DECREF(__pyx_v_c);
    __pyx_v_c = __pyx_1;
    __pyx_1 = 0;
    goto __pyx_L6;
    __pyx_L5:;
    if (__pyx_why == 4) {
      Py_XDECREF(__pyx_exc_type);
      Py_XDECREF(__pyx_exc_value);
      Py_XDECREF(__pyx_exc_tb);
    }
    goto __pyx_L1;
    __pyx_L6:;
    switch (__pyx_why) {
      case 3: goto __pyx_L0;
      case 4: {
        PyErr_Restore(__pyx_exc_type, __pyx_exc_value, __pyx_exc_tb);
        __pyx_lineno = __pyx_exc_lineno;
        __pyx_exc_type = 0;
        __pyx_exc_value = 0;
        __pyx_exc_tb = 0;
        goto __pyx_L1;
      }
    }
  }

  /* "/Local/Projects/D/Pyrex/Source/Tests/4/tryfinally.pyx":11 */
  __pyx_1 = PyObject_GetIter(__pyx_v_b); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 11; goto __pyx_L1;}
  for (;;) {
    __pyx_2 = PyIter_Next(__pyx_1);
    if (!__pyx_2) {
      if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 11; goto __pyx_L1;}
      break;
    }
    Py_DECREF(__pyx_v_a);
    __pyx_v_a = __pyx_2;
    __pyx_2 = 0;
    /*try:*/ {

      /* "/Local/Projects/D/Pyrex/Source/Tests/4/tryfinally.pyx":13 */
      goto __pyx_L9;

      /* "/Local/Projects/D/Pyrex/Source/Tests/4/tryfinally.pyx":14 */
      goto __pyx_L10;

      /* "/Local/Projects/D/Pyrex/Source/Tests/4/tryfinally.pyx":15 */
      __pyx_2 = PyNumber_Multiply(__pyx_v_a, __pyx_v_b); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 15; goto __pyx_L12;}
      Py_DECREF(__pyx_v_c);
      __pyx_v_c = __pyx_2;
      __pyx_2 = 0;
    }
    /*finally:*/ {
      int __pyx_why;
      PyObject *__pyx_exc_type, *__pyx_exc_value, *__pyx_exc_tb;
      int __pyx_exc_lineno;
      __pyx_why = 0; goto __pyx_L13;
      __pyx_L9: __pyx_why = 1; goto __pyx_L13;
      __pyx_L10: __pyx_why = 2; goto __pyx_L13;
      __pyx_L12: {
        __pyx_why = 4;
        Py_XDECREF(__pyx_2); __pyx_2 = 0;
        PyErr_Fetch(&__pyx_exc_type, &__pyx_exc_value, &__pyx_exc_tb);
        __pyx_exc_lineno = __pyx_lineno;
        goto __pyx_L13;
      }
      __pyx_L13:;
      __pyx_v_i = 42;
      switch (__pyx_why) {
        case 1: goto __pyx_L7;
        case 2: goto __pyx_L8;
        case 4: {
          PyErr_Restore(__pyx_exc_type, __pyx_exc_value, __pyx_exc_tb);
          __pyx_lineno = __pyx_exc_lineno;
          __pyx_exc_type = 0;
          __pyx_exc_value = 0;
          __pyx_exc_tb = 0;
          goto __pyx_L1;
        }
      }
    }
    __pyx_L7:;
  }
  __pyx_L8:;
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("tryfinally.f");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_a);
  Py_DECREF(__pyx_v_b);
  Py_DECREF(__pyx_v_c);
  Py_DECREF(__pyx_v_x);
  return __pyx_r;
}

static struct PyMethodDef __pyx_methods[] = {
  {"f", (PyCFunction)__pyx_f_10tryfinally_f, METH_VARARGS|METH_KEYWORDS, 0},
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC inittryfinally(void); /*proto*/
PyMODINIT_FUNC inittryfinally(void) {
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("tryfinally", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  Py_INCREF(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  return;
  __pyx_L1:;
  __Pyx_AddTraceback("tryfinally");
}

static char *__pyx_filenames[] = {
  "tryfinally.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
}

static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb) {
	if (value == Py_None)
		value = NULL;
	if (tb == Py_None)
		tb = NULL;
	Py_XINCREF(type);
	Py_XINCREF(value);
	Py_XINCREF(tb);
	if (tb && !PyTraceBack_Check(tb)) {
		PyErr_SetString(PyExc_TypeError,
			"raise: arg 3 must be a traceback or None");
		goto raise_error;
	}
	#if PY_VERSION_HEX < 0x02050000
	if (!PyClass_Check(type))
	#else
	if (!PyType_Check(type))
	#endif
	{
		/* Raising an instance.  The value should be a dummy. */
		if (value) {
			PyErr_SetString(PyExc_TypeError,
				"instance exception may not have a separate value");
			goto raise_error;
		}
		/* Normalize to raise <class>, <instance> */
		value = type;
		#if PY_VERSION_HEX < 0x02050000
			if (PyInstance_Check(type)) {
				type = (PyObject*) ((PyInstanceObject*)type)->in_class;
				Py_INCREF(type);
			}
			else {
				PyErr_SetString(PyExc_TypeError,
					"raise: exception must be an old-style class or instance");
				goto raise_error;
			}
		#else
			type = (PyObject*) type->ob_type;
			Py_INCREF(type);
			if (!PyType_IsSubtype((PyTypeObject *)type, (PyTypeObject *)PyExc_BaseException)) {
				PyErr_SetString(PyExc_TypeError,
					"raise: exception class must be a subclass of BaseException");
				goto raise_error;
			}
		#endif
	}
	PyErr_Restore(type, value, tb);
	return;
raise_error:
	Py_XDECREF(value);
	Py_XDECREF(type);
	Py_XDECREF(tb);
	return;
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
