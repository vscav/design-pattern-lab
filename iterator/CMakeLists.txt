cmake_minimum_required(VERSION 3.13)

project(iterator)

file(GLOB_RECURSE src_files_list src/*.cpp)
file(GLOB_RECURSE header_files_list header/*.hpp)

# files to compile
add_executable(iterator main.cpp ${src_files_list} ${header_files_list})

# compilation flags
target_compile_features(iterator PRIVATE cxx_std_11) # use at least c++ 11
target_compile_options(iterator PRIVATE -Wall)       # specify some compilation flags