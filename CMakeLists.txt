cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        Class.h
        Class.cpp
        Subject.h
        Subject.cpp
        Schedule.h
        Schedule.cpp
        Student.h
        Student.cpp
        Course.h
        Course.cpp
        Reader.cpp
        Reader.h)
