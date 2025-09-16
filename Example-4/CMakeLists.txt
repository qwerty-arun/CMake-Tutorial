cmake_minimum_required(VERSION 3.10)
project(LibraryExample)

add_library(math_utils src/math_utils.cpp)   # Create a library
add_executable(app src/main.cpp)             # Create main app
target_link_libraries(app PRIVATE math_utils) # Link library to app
