cmake_minimum_required(VERSION 2.8)
project(clib)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 14)

add_library(clib lib.cpp)
add_executable(test_clib test_clib.c)
target_link_libraries(test_clib clib)
