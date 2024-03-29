cmake_minimum_required(VERSION 3.13)

project(design-pattern-lab)

# specify the system
message(VERBOSE "CMAKE_VERSION           : " ${CMAKE_VERSION})
message(VERBOSE "CMAKE_SYSTEM_NAME       : " ${CMAKE_SYSTEM_NAME})
message(VERBOSE "CMAKE_SYSTEM            : " ${CMAKE_SYSTEM})
message(VERBOSE "CMAKE_SYSTEM_PROCESSOR  : " ${CMAKE_SYSTEM_PROCESSOR} "\n")

# specify the directories
message(VERBOSE "CMAKE_BINARY_DIR        : " ${CMAKE_BINARY_DIR})
message(VERBOSE "CMAKE_SOURCE_DIR        : " ${CMAKE_SOURCE_DIR})
message(VERBOSE "CMAKE_HOME_DIRECTORY    : " ${CMAKE_HOME_DIRECTORY})
message(VERBOSE "PROJECT_BINARY_DIR      : " ${PROJECT_BINARY_DIR})
message(VERBOSE "PROJECT_SOURCE_DIR      : " ${PROJECT_SOURCE_DIR} "\n")

# compile flags
message(VERBOSE "CMAKE_CXX_FLAGS         : " ${CMAKE_CXX_FLAG})
message(VERBOSE "CMAKE_CXX_FLAGS_DEBUG   : " ${CMAKE_CXX_FLAGS_DEBUG})
message(VERBOSE "CMAKE_CXX_FLAGS_RELEASE : " ${CMAKE_CXX_FLAGS_RELEASE})
message(VERBOSE "CMAKE_CXX_COMPILER      : " ${CMAKE_CXX_COMPILER} "\n")

# (optional) put the binary files in this directory
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

# add singleton
message(STATUS "singleton cmake part ..." )
add_subdirectory(singleton)

# add observer
message(STATUS "observer cmake part ..." )
add_subdirectory(observer)

# add iterator
message(STATUS "iterator cmake part ..." )
add_subdirectory(iterator)

# add strategy
message(STATUS "strategy cmake part ..." )
add_subdirectory(strategy)

#set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_BUILD_TYPE Release)