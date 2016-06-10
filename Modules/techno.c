#include "Python.h"


PyObject *
do_nothing(PyObject *self)
{
	PyUnicodeObject *string= PyUnicode_FromString("hello world");
	return string;
}


#define PUBLIC_METHOD_TYPE (METH_VARARGS|METH_KEYWORDS)
static PyMethodDef techno_functions[] =  {
	{
			"do_nothing",
			(PyCFunction)do_nothing,
			PUBLIC_METHOD_TYPE,
	        PyDoc_STR("Does nothing really.")
	},
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
    PyObject *module;
    module = PyModule_Create(&techno);
    return module;
}
