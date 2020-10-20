cmake_minimum_required(VERSION 3.13)

project(observer)

file(GLOB_RECURSE src_files_list src/*.cpp)
file(GLOB_RECURSE header_files_list header/*.hpp)

add_executable(observer main.cpp ${src_files_list} ${header_files_list})

target_compile_features(observer PRIVATE cxx_std_11)
target_compile_options(observer PRIVATE -Wall)