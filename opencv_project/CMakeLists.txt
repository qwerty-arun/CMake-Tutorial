cmake_minimum_required(VERSION 3.10)
project(OpenCVExample)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find OpenCV
find_package(OpenCV REQUIRED)

# Add executable
add_executable(app src/main.cpp)

# Link OpenCV to app
target_link_libraries(app PRIVATE ${OpenCV_LIBS})

# Include OpenCV headers
target_include_directories(app PRIVATE ${OpenCV_INCLUDE_DIRS})
