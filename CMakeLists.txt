cmake_minimum_required(VERSION 3.26)
project(class_compte)

set(CMAKE_CXX_STANDARD 17)

add_executable(class_compte main.cpp
        Compte.cpp
        Compte.h
        Compte_remun.cpp
        Compte_remun.h
)
