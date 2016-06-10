#include "Python.h"                     /* general Python API             */


static PyMethodDef myparser_functions[] =  {
    {NULL, NULL, 0, NULL}
    };


static struct PyModuleDef myparsermodule = {
        PyModuleDef_HEAD_INIT,
        "myparser",
        NULL,
        -1,
        myparser_functions,
        NULL,
        NULL,
        NULL,
        NULL
};


PyMODINIT_FUNC PyInit_myparser(void);  /* supply a prototype */
PyMODINIT_FUNC
PyInit_myparser(void)
{
    PyObject *module, *copyreg;
    module = PyModule_Create(&myparsermodule);
    return module;
}
