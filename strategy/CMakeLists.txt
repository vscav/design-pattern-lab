cmake_minimum_required(VERSION 3.13)

project(strategy)

file(GLOB_RECURSE src_files_list src/*.cpp)
file(GLOB_RECURSE header_files_list header/*.hpp)

add_executable(strategy main.cpp ${src_files_list} ${header_files_list})

target_compile_features(strategy PRIVATE cxx_std_11)
target_compile_options(strategy PRIVATE -Wall)