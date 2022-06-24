cmake_minimum_required(VERSION 3.22)
project(Cost_Software)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Cost_Software
        main.cpp
        operacionesVector.cpp
        operacionesVector.hpp)
