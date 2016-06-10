#include "Python.h"

//
//mod_ty
//PyParser_ASTFromFileObject(FILE *fp, PyObject *filename, const char* enc,
//                           int start, const char *ps1,
//                           const char *ps2, PyCompilerFlags *flags, int *errcode,
//                           PyArena *arena)
//{
//    mod_ty mod;
//    PyCompilerFlags localflags;
//    perrdetail err;
//    int iflags = PARSER_FLAGS(flags);
//
//    node *n = PyParser_ParseFileObject(fp, filename, enc,
//                                       &_PyParser_Grammar,
//                                       start, ps1, ps2, &err, &iflags);
//    if (flags == NULL) {
//        localflags.cf_flags = 0;
//        flags = &localflags;
//    }
//    if (n) {
//        flags->cf_flags |= iflags & PyCF_MASK;
//        mod = PyAST_FromNodeObject(n, flags, filename, arena);
//        PyNode_Free(n);
//    }
//    else {
//        err_input(&err);
//        if (errcode)
//            *errcode = err.error;
//        mod = NULL;
//    }
//    err_free(&err);
//    return mod;
//}
//
//
//static PyObject *
//run_mod(mod_ty mod, PyObject *filename, PyObject *globals, PyObject *locals,
//            PyCompilerFlags *flags, PyArena *arena)
//{
//    PyCodeObject *co;
//    PyObject *v;
//    co = PyAST_CompileObject(mod, filename, flags, -1, arena);
//    if (co == NULL)
//        return NULL;
//    v = PyEval_EvalCode((PyObject*)co, globals, locals);
//    Py_DECREF(co);
//    return v;
//}


static PyMethodDef techno_functions[] =  {
    {NULL, NULL, 0, NULL}
    };


static struct PyModuleDef techno= {
        PyModuleDef_HEAD_INIT,
        "techno",
        NULL,
        -1,
		techno_functions,
        NULL,
        NULL,
        NULL,
        NULL
};


PyMODINIT_FUNC PyInit_techno(void);  /* supply a prototype */
PyMODINIT_FUNC
PyInit_techno(void)
{
    PyObject *module, *copyreg;
    module = PyModule_Create(&techno);
    return module;
}
