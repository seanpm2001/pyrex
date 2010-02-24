/* Generated by Pyrex 0.9.8.5 on Tue Feb 23 23:39:25 2010 */

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

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name); /*proto*/

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from builtinfuncs */


/* Declarations from implementation of builtinfuncs */

static int __pyx_f_12builtinfuncs_f(void); /*proto*/

static char __pyx_k1[] = "spam";
static char __pyx_k2[] = "abs";

static PyObject *__pyx_n_abs;
static PyObject *__pyx_n_spam;


static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {&__pyx_n_abs, 1, __pyx_k2, sizeof(__pyx_k2)},
  {&__pyx_n_spam, 1, __pyx_k1, sizeof(__pyx_k1)},
  {0, 0, 0, 0}
};



/* Implementation of builtinfuncs */

static int __pyx_f_12builtinfuncs_f(void) {
  PyObject *__pyx_v_x;
  PyObject *__pyx_v_y;
  PyObject *__pyx_v_z;
  PyObject *__pyx_v_w;
  int __pyx_v_i;
  int __pyx_r;
  PyObject *__pyx_1 = 0;
  int __pyx_2;
  int __pyx_3;
  long __pyx_4;
  char *__pyx_4;
  Py_ssize_t __pyx_5;
  PyObject *__pyx_6 = 0;
  __pyx_v_x = Py_None; Py_INCREF(Py_None);
  __pyx_v_y = Py_None; Py_INCREF(Py_None);
  __pyx_v_z = Py_None; Py_INCREF(Py_None);
  __pyx_v_w = Py_None; Py_INCREF(Py_None);

  /* "/Local/Projects/D/Pyrex/Source/Tests/9/builtinfuncs.pyx":4 */
  __pyx_1 = PyNumber_Absolute(__pyx_v_y); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;}
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = __pyx_1;
  __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/9/builtinfuncs.pyx":5 */
  __pyx_2 = PyObject_IsTrue(__pyx_v_x); if (__pyx_2 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  __pyx_v_i = __pyx_2;

  /* "/Local/Projects/D/Pyrex/Source/Tests/9/builtinfuncs.pyx":6 */
  __pyx_3 = PyObject_DelAttr(__pyx_v_x,__pyx_n_spam); if (__pyx_3 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 6; goto __pyx_L1;}

  /* "/Local/Projects/D/Pyrex/Source/Tests/9/builtinfuncs.pyx":7 */
  __pyx_1 = PyObject_Dir(__pyx_v_y); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 7; goto __pyx_L1;}
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = __pyx_1;
  __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/9/builtinfuncs.pyx":8 */
  __pyx_1 = PyNumber_Divmod(__pyx_v_y,__pyx_v_z); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;}
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = __pyx_1;
  __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/9/builtinfuncs.pyx":9 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_y,__pyx_n_spam); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L1;}
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = __pyx_1;
  __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/9/builtinfuncs.pyx":10 */
  __pyx_2 = PyObject_HasAttr(__pyx_v_y,__pyx_n_spam); if (__pyx_2 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 10; goto __pyx_L1;}
  __pyx_v_i = __pyx_2;

  /* "/Local/Projects/D/Pyrex/Source/Tests/9/builtinfuncs.pyx":11 */
  __pyx_2 = PyObject_Hash(__pyx_v_y); if (__pyx_2 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 11; goto __pyx_L1;}
  __pyx_v_i = __pyx_2;

  /* "/Local/Projects/D/Pyrex/Source/Tests/9/builtinfuncs.pyx":12 */
  __pyx_4 = PyString_AsString(__pyx_v_y); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 12; goto __pyx_L1;}
  __pyx_1 = PyString_InternFromString(__pyx_4); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 12; goto __pyx_L1;}
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = __pyx_1;
  __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/9/builtinfuncs.pyx":13 */
  __pyx_2 = PyObject_IsInstance(__pyx_v_y,__pyx_v_z); if (__pyx_2 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 13; goto __pyx_L1;}
  __pyx_v_i = __pyx_2;

  /* "/Local/Projects/D/Pyrex/Source/Tests/9/builtinfuncs.pyx":14 */
  __pyx_2 = PyObject_IsSubclass(__pyx_v_y,__pyx_v_z); if (__pyx_2 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 14; goto __pyx_L1;}
  __pyx_v_i = __pyx_2;

  /* "/Local/Projects/D/Pyrex/Source/Tests/9/builtinfuncs.pyx":15 */
  __pyx_1 = PyObject_GetIter(__pyx_v_y); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 15; goto __pyx_L1;}
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = __pyx_1;
  __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/9/builtinfuncs.pyx":16 */
  __pyx_1 = PyCallIter_New(__pyx_v_y,__pyx_v_z); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 16; goto __pyx_L1;}
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = __pyx_1;
  __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/9/builtinfuncs.pyx":17 */
  __pyx_5 = PyObject_Length(__pyx_v_x); if (__pyx_5 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 17; goto __pyx_L1;}
  __pyx_v_i = __pyx_5;

  /* "/Local/Projects/D/Pyrex/Source/Tests/9/builtinfuncs.pyx":18 */
  __pyx_1 = PyTuple_New(2); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 18; goto __pyx_L1;}
  Py_INCREF(__pyx_v_y);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_v_y);
  Py_INCREF(__pyx_v_z);
  PyTuple_SET_ITEM(__pyx_1, 1, __pyx_v_z);
  __pyx_6 = PyObject_CallObject(((PyObject *)(&PyFile_Type)), __pyx_1); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 18; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = __pyx_6;
  __pyx_6 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/9/builtinfuncs.pyx":19 */
  __pyx_1 = PyNumber_Power(__pyx_v_y,__pyx_v_z,__pyx_v_w); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 19; goto __pyx_L1;}
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = __pyx_1;
  __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/9/builtinfuncs.pyx":20 */
  __pyx_6 = PyImport_ReloadModule(__pyx_v_y); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 20; goto __pyx_L1;}
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = __pyx_6;
  __pyx_6 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/9/builtinfuncs.pyx":21 */
  __pyx_1 = PyObject_Repr(__pyx_v_y); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 21; goto __pyx_L1;}
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = __pyx_1;
  __pyx_1 = 0;

  /* "/Local/Projects/D/Pyrex/Source/Tests/9/builtinfuncs.pyx":22 */
  __pyx_3 = PyObject_SetAttr(__pyx_v_x,__pyx_v_y,__pyx_v_z); if (__pyx_3 == -1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 22; goto __pyx_L1;}

  /* "/Local/Projects/D/Pyrex/Source/Tests/9/builtinfuncs.pyx":23 */
  __pyx_6 = __Pyx_GetName(__pyx_b, __pyx_n_abs); if (!__pyx_6) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 23; goto __pyx_L1;}
  Py_DECREF(__pyx_v_x);
  __pyx_v_x = __pyx_6;
  __pyx_6 = 0;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_6);
  __Pyx_AddTraceback("builtinfuncs.f");
  __pyx_r = (-1);
  __pyx_L0:;
  Py_DECREF(__pyx_v_x);
  Py_DECREF(__pyx_v_y);
  Py_DECREF(__pyx_v_z);
  Py_DECREF(__pyx_v_w);
  return __pyx_r;
}

static struct PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC initbuiltinfuncs(void); /*proto*/
PyMODINIT_FUNC initbuiltinfuncs(void) {
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("builtinfuncs", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  Py_INCREF(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  return;
  __pyx_L1:;
  __Pyx_AddTraceback("builtinfuncs");
}

static char *__pyx_filenames[] = {
  "builtinfuncs.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
}

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name) {
	PyObject *result;
	result = PyObject_GetAttr(dict, name);
	if (!result)
		PyErr_SetObject(PyExc_NameError, name);
	return result;
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
