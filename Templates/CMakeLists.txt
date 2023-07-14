cmake_minimum_required(VERSION 3.10)

project(AdvancedCppPlayground)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/templates/common)
include_directories(templates)

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(AdvancedCppPlayground ${SOURCES})
