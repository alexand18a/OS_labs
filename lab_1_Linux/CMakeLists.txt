cmake_minimum_required(VERSION 3.21)
project(Labraries)

set(CMAKE_CXX_STANDARD 17)

include_directories(Main)
include_directories(NumberLibrary)
include_directories(VectorLibrary)

add_subdirectory(Main)
add_subdirectory(NumberLibrary)
add_subdirectory(VectorLibrary)
