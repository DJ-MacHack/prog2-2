CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-Wall -O2 -g -pedantic -std=c++14
SRCS=main.cpp io.cpp array.cpp 
OBJS=$(subst .cc,.cpp,.h,.hh,.o,$(SRCS))
all: artikel
artikel: main.o artikel.o artikeltest.o artikeldialog.o
	$(CXX) $(CPPFLAGS) -o artikel main.o artikel.o artikeltest.o artikeldialog.o
main.o: main.cpp ArtikelTest.h
	$(CXX) $(CPPFLAGS) -c main.cpp
artikel.o: artikel.h
artikeltest.o: artikeltest.h
artikeldialog.o: artikeldialog.h


.PHONY: clean
clean:
	rm -f artikel *.o

.PHONY: clear
clear:
	rm -f *.o
