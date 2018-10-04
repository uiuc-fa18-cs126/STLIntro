CXX=g++
TESTEXE=tests
EXE=stltest gradebook
OBJS=
BUILDARGS= -g -std=c++14

all : $(TESTEXE) $(EXE)

tests : tests.cpp
	$(CXX) $(BUILDARGS) -o tests tests.cpp mathutils.o

runtests : tests
	./tests

gradebook : gradebook.o main.o
	$(CXX) $(BUILDARGS) -o gradebook gradebook.o main.o 

gradebook.o : gradebook.cpp gradebook.h
	$(CXX) $(BUILDARGS) -c -o gradebook.o gradebook.cpp 

main.o : main.cpp gradebook.h
	$(CXX) $(BUILDARGS) -c -o main.o main.cpp 

mathutils.o : mathutils.cpp mathutils.h
	$(CXX) $(BUILDARGS) -c -o mathutils.o mathutils.cpp

stltest.o : stltest.cpp
	$(CXX) $(BUILDARGS) -c -o stltest.o stltest.cpp

stltest : stltest.o
	$(CXX) $(BUILDARGS) -o stltest stltest.o

clean :
	rm -rf $(OBJS) $(TESTEXE) $(EXE) *.dSYM