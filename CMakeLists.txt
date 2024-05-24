cmake_minimum_required(VERSION 3.27)
project(OOP_5_1_F)

set(CMAKE_CXX_STANDARD 17)

add_executable(OOP_5_1_F main.cpp
        Car.cpp
        Bus.cpp
        BusC.cpp)

add_subdirectory(Google_test)
