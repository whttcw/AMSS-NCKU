filein = -I/usr/include/ -I/usr/lib/x86_64-linux-gnu/openmpi/include/ -I/usr/lib/x86_64-linux-gnu/openmpi/lib/ -I/usr/lib/gcc/x86_64-linux-gnu/15/include/

LDLIBS = -L/usr/lib/x86_64-linux-gnu -L/usr/lib64 -L/usr/lib/gcc/x86_64-linux-gnu/15 -lgfortran -L/usr/lib/x86_64-linux-gnu/libcuda -lcudart -lmpich

CXXAPPFLAGS = -O3 -Wno-deprecated -Dfortran3 -Dnewc

f90appflags = -O3 -x f95-cpp-input

f90         = gfortran
f77         = gfortran
CXX         = g++
CC          = gcc
CLINKER     = mpic++

Cu          = nvcc
CUDA_LIB_PATH = -L/usr/lib/x86_64-linux-gnu -I/usr/include -I/usr/lib/cuda/include
CUDA_APP_FLAGS = -c -g -O3 --ptxas-options=-v -Dfortran3 -Dnewc
