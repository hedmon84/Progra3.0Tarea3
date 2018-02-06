cmake_minimum_required(VERSION 3.8)
project(Progra3_0Tarea3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Kilometraje.cpp)
add_executable(Progra3_0Tarea3 ${SOURCE_FILES})
add_executable(Par&Impar Par&Impar.cpp)
add_executable(Multiplos Multiplos.cpp)
add_executable(main main.cpp)
add_executable(Kilometraje Kilometraje.cpp)