CXX=g++
TESTEXE=tests
EXE=stltest
OBJS=
BUILDARGS= -g -std=c++14

all : $(TESTEXE) $(EXE)

tests : tests.cpp
	$(CXX) $(BUILDARGS) -o tests tests.cpp

runtests : tests
	./tests

stltest.o : stltest.cpp
	$(CXX) $(BUILDARGS) -c -o stltest.o stltest.cpp

stltest : stltest.o
	$(CXX) $(BUILDARGS) -o stltest stltest.o

clean :
	rm -rf $(OBJS) $(TESTEXE) $(EXE) *.dSYM