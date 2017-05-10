CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-Wall -O2 -g -pedantic -std=c++14
SRCS=main.cpp io.cpp array.cpp 
OBJS=$(subst .cc,.cpp,.h,.hh,.o,$(SRCS))
all: artikel
artikel: main.o Artikel.o ArtikelTest.o Artikeldialog.o
	$(CXX) $(CPPFLAGS) -o artikel main.o Artikel.o ArtikelTest.o Artikeldialog.o
main.o: main.cpp ArtikelTest.h
	$(CXX) $(CPPFLAGS) -c main.cpp
Artikel.o: Artikel.h
ArtikelTest.o: ArtikelTest.h
Artikeldialog.o: Artikeldialog.h


.PHONY: clean
clean:
	rm -f artikel *.o

.PHONY: clear
clear:
	rm -f *.o
