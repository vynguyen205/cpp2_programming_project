# cmake tested version
cmake_minimum_required(VERSION 3.22...3.27)

# project name, description, and language
project(cpp2_programming_project
    VERSION 0.1.0
    DESCRIPTION "Application to product transcripts from student grades"
    LANGUAGES CXX)

# add src code
add_executable(cpp2_programming_project src/Main.cpp
    src/Course.cpp
    src/Student.cpp
    src/StudentList.cpp
    )

# private vs. public lib & cxx std - will use cxx 17
target_compile_features(cpp2_programming_project PRIVATE cxx_std_17)

# dir for include header
target_include_directories(cpp2_programming_project PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include)

# lib to link
#target_link_libraries(cpp2_programming_project ex-lib)
