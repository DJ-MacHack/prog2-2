cmake_minimum_required(VERSION 3.6)
project(2)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Artikel.cpp Artikel.h ArtikelTest.cpp ArtikelTest.h Artikeldialog.cpp Artikeldialog.h)
add_executable(2 ${SOURCE_FILES})