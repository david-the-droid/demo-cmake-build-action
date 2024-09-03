cmake_minimum_required(VERSION 3.10)

# set the project name & version

project(Demo VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(src)
add_subdirectory(tests)
enable_testing()
