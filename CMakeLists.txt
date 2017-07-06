cmake_minimum_required(VERSION 3.7)
project(CPPFun)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lm -fstack-protector-all -Wall -Wextra -Werror -Wfloat-equal -Wno-unused-variable -Wno-unused-parameter -Wno-unused-but-set-variable")
set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)
add_executable(CPPFun ${SOURCE_FILES})