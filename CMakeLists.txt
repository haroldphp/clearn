cmake_minimum_required(VERSION 3.7)
project(learnc)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES chapter2/first.c chapter10/designate.c)
add_executable(learnc ${SOURCE_FILES})