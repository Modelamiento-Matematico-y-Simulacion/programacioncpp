cmake_minimum_required(VERSION 3.10)
project(task_document-order-numbers)

# Establece el estándar de C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Añade el ejecutable
add_executable(task_document-order-numbers src/lector.cpp)
