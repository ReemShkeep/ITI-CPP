cmake_minimum_required(VERSION 3.24)
project (person)

set(CMAKE_CXX_STANDARD 17)

add_executable(person main.cpp person.cpp person.h student.cpp student.h)
