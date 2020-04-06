cmake_minimum_required(VERSION 3.15)
project(Easy_1_1)

set(CMAKE_CXX_STANDARD 17)

#
add_executable(Easy_1_1 src/Stack.cpp src/Stack.h src/tests/test.cpp)
add_subdirectory(src)
add_subdirectory(gtest)