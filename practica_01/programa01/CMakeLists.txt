cmake_minimum_required(VERSION 3.10)
project(programa01)

# Establece el estándar de C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Añade el ejecutable
add_executable(programa01 src/main.cpp)
