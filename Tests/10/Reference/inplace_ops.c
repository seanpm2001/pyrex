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
#ifndef WIN32
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


typedef struct {PyObject **p; char *s;} __Pyx_InternTabEntry; /*proto*/
typedef struct {PyObject **p; char *s; long n;} __Pyx_StringTabEntry; /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
static char **__pyx_f;

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from inplace_ops */

static int __pyx_f_11inplace_ops_f(void); /*proto*/


/* Implementation of inplace_ops */

static int __pyx_f_11inplace_ops_f(void) {
  PyObject *__pyx_v_a;
  PyObject *__pyx_v_b;
  int __pyx_r;
  PyObject *__pyx_1 = 0;
  __pyx_v_a = Py_None; Py_INCREF(Py_None);
  __pyx_v_b = Py_None; Py_INCREF(Py_None);

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/inplace_ops.pyx":3 */
  __pyx_1 = PyNumber_InPlaceAdd(__pyx_v_a, __pyx_v_b); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 3; goto __pyx_L1;}
  Py_DECREF(__pyx_v_a);
  __pyx_v_a = __pyx_1;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/inplace_ops.pyx":4 */
  __pyx_1 = PyNumber_InPlaceSubtract(__pyx_v_a, __pyx_v_b); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 4; goto __pyx_L1;}
  Py_DECREF(__pyx_v_a);
  __pyx_v_a = __pyx_1;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/inplace_ops.pyx":5 */
  __pyx_1 = PyNumber_InPlaceMultiply(__pyx_v_a, __pyx_v_b); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 5; goto __pyx_L1;}
  Py_DECREF(__pyx_v_a);
  __pyx_v_a = __pyx_1;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/inplace_ops.pyx":6 */
  __pyx_1 = PyNumber_InPlaceDivide(__pyx_v_a, __pyx_v_b); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 6; goto __pyx_L1;}
  Py_DECREF(__pyx_v_a);
  __pyx_v_a = __pyx_1;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/inplace_ops.pyx":7 */
  __pyx_1 = PyNumber_InPlaceRemainder(__pyx_v_a, __pyx_v_b); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 7; goto __pyx_L1;}
  Py_DECREF(__pyx_v_a);
  __pyx_v_a = __pyx_1;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/inplace_ops.pyx":8 */
  __pyx_1 = PyNumber_InPlacePower(__pyx_v_a, __pyx_v_b, Py_None); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 8; goto __pyx_L1;}
  Py_DECREF(__pyx_v_a);
  __pyx_v_a = __pyx_1;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/inplace_ops.pyx":9 */
  __pyx_1 = PyNumber_InPlaceLshift(__pyx_v_a, __pyx_v_b); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 9; goto __pyx_L1;}
  Py_DECREF(__pyx_v_a);
  __pyx_v_a = __pyx_1;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/inplace_ops.pyx":10 */
  __pyx_1 = PyNumber_InPlaceRshift(__pyx_v_a, __pyx_v_b); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 10; goto __pyx_L1;}
  Py_DECREF(__pyx_v_a);
  __pyx_v_a = __pyx_1;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/inplace_ops.pyx":11 */
  __pyx_1 = PyNumber_InPlaceAnd(__pyx_v_a, __pyx_v_b); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 11; goto __pyx_L1;}
  Py_DECREF(__pyx_v_a);
  __pyx_v_a = __pyx_1;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/inplace_ops.pyx":12 */
  __pyx_1 = PyNumber_InPlaceXor(__pyx_v_a, __pyx_v_b); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 12; goto __pyx_L1;}
  Py_DECREF(__pyx_v_a);
  __pyx_v_a = __pyx_1;

  /* "/Local/Projects/D/Pyrex/Source/Tests/10/inplace_ops.pyx":13 */
  __pyx_1 = PyNumber_InPlaceOr(__pyx_v_a, __pyx_v_b); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 13; goto __pyx_L1;}
  Py_DECREF(__pyx_v_a);
  __pyx_v_a = __pyx_1;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  __Pyx_AddTraceback("inplace_ops.f");
  __pyx_r = (-1);
  __pyx_L0:;
  Py_DECREF(__pyx_v_a);
  Py_DECREF(__pyx_v_b);
  return __pyx_r;
}

static struct PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC initinplace_ops(void); /*proto*/
PyMODINIT_FUNC initinplace_ops(void) {
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("inplace_ops", __pyx_methods, 0, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  Py_INCREF(__pyx_m);
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  return;
  __pyx_L1:;
  __Pyx_AddTraceback("inplace_ops");
}

static char *__pyx_filenames[] = {
  "inplace_ops.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
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
