cmake_minimum_required(VERSION 3.21)
project(NumberLibrary)

set(CMAKE_CXX_STANDARD 17)

add_library( NumberLibrary STATIC Number.h Number.cpp )