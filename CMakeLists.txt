cmake_minimum_required(VERSION 3.30)
project(cpprefresher)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)
add_subdirectory(gtests)
add_subdirectory(libs)