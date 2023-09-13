cmake_minimum_required(VERSION 3.27)

project(myApp
    VERSION 1.0
    DESCRIPTION "A brief CMake experiment"
    LANGUAGES CXX)

add_executable(myApp main.cpp)

target_compile_features(myApp PRIVATE cxx_std_17)

# target_compile_options(myApp PRIVATE -Wall  -Wpedantic)
