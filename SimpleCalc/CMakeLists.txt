cmake_minimum_required(VERSION 3.20)

project(SimpleCalc)

include_directories(include)

set(CMAKE_CXX_STANDARD 14)

add_executable(SimpleCalc src/main.cpp src/calc.cpp)



