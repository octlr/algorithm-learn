cmake_minimum_required(VERSION 3.8)
project(algorithm_learn C)

set(CMAKE_C_STANDARD 99)

include_directories(./include)

add_subdirectory(leetcode)

add_executable(algorithm_learn main.c include/AVL.h include/BST.h include/RBT.h include/BTree.h)

target_link_libraries(algorithm_learn
        leetcode
        )