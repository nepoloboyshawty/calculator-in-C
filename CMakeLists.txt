cmake_minimum_required(VERSION 3.10)
project(calculator)

set(CMAKE_C_STANDARD 99)

include_directories(includes)

add_executable(calculator
    calculator.c
    modules/input_utils.c
    modules/math_func.c
)