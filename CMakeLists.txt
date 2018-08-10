cmake_minimum_required(VERSION 3.10)
project(algorithm_learn C)

set(CMAKE_C_STANDARD 99)

include_directories(./include)

add_subdirectory(leetcode)

add_executable(algorithm_learn main.c)

target_link_libraries(algorithm_learn
        leetcode
        )