cmake_minimum_required(VERSION 3.27)
project(templates_complete)

set(CMAKE_CXX_STANDARD 17)

include_directories(part1/chapter1)

add_executable(templates_complete
        part1/chapter1/max1.h
        part1/chapter1/max1.cpp)
