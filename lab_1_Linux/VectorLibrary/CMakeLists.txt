cmake_minimum_required(VERSION 3.21)
project(VectorLibrary)

set(CMAKE_CXX_STANDARD 17)

add_library( VectorLibrary SHARED Vector.h Vector.cpp )

target_link_libraries(VectorLibrary PUBLIC NumberLibrary)