cmake_minimum_required(VERSION 3.8 FATAL_ERROR)
project(Kate LANGUAGES CXX)

add_subdirectory(KateCore KateCore)
add_subdirectory(KateLLVM KateLLVM)
add_subdirectory(Utils Utils)

file(GLOB SOURCES src/main.cpp)

add_executable(KateExec ${SOURCES})

target_link_libraries(KateExec KateCore KateLLVM Utils)