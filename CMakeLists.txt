cmake_minimum_required(VERSION 3.16)

project(c_bit_operations C)

set(CMAKE_C_STANDARD 99)

include_directories(include)

add_executable(bit_example
    examples/main.c
    src/bit_utils.c
)

add_executable(test_bit_utils
    tests/test_bit_utils.c
    src/bit_utils.c
)