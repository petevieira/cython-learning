from distutils.core import setup
from Cython.Build import cythonize

# import ipdb; ipdb.set_trace()
setup(ext_modules = cythonize("cgrip.pyx",    sources=["Grip.cpp"],    language="c++",))
