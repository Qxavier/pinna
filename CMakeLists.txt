cmake_minimum_required(VERSION 3.6)
project(pinna)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp src/pinna_defs.h src/util.h)
add_executable(pinna ${SOURCE_FILES})