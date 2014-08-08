# distutils: language = c++
# distutils: sources = Grip.cpp

from libcpp.string cimport string

cdef extern from "Grip.h":
     cdef cppclass Grip:
         Grip() except +
         int open()
         string load(string file)
         void setState(int newState)
         int getState()

cdef class PyGrip:
     cdef Grip *thisptr
     def __cinit__(self):
         self.thisptr = new Grip()
     def __dealloc__(self):
         del self.thisptr
     def open(self):
         return self.thisptr.open()
     def load(self, file):
         return self.thisptr.load(file)
     def set_state(self, new_state):
         self.thisptr.setState(new_state)
     def get_state(self):
         return self.thisptr.getState()