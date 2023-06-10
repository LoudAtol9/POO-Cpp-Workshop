
# Set project directory one level above of Makefile directory. $(CURDIR) is a GNU make variable containing the path to the current working directory
PROJDIR := ..
SOURCEDIR := $(PROJDIR)/source
BUILDDIR := $(PROJDIR)/build

OBJECTS = $(SOURCEDIR)/modelos/*.cpp $(SOURCEDIR)/utils/*.cpp  $(BUILDDIR)/main.cpp

RESULT = $(BUILDDIR)/main.exe

COMPILER = g++

all:
	$(COMPILER) -g $(OBJECTS) -o $(RESULT)



