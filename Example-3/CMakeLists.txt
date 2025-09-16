cmake_minimum_required(VERSION 3.10)
project(OrganizedExample)

# Collect all cpp files from src/
file(GLOB SOURCES "src/*.cpp")

add_executable(organized ${SOURCES})
