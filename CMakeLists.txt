cmake_minimum_required(VERSION 3.27)
project(CPP2)

set(CMAKE_CXX_STANDARD 17)

add_executable(CPP2 main.cpp
        firstTask/FirstTask.cpp
        firstTask/FirstTask.h
        secondTask/SecondTask.cpp
        secondTask/SecondTask.h
        thirdTask/ThirdTask.cpp
        thirdTask/ThirdTask.h)
