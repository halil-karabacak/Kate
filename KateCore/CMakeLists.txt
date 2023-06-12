cmake_minimum_required(VERSION 3.16 FATAL_ERROR)
project(KateCore LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_compile_options(/bigobj)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include" "${CMAKE_CURRENT_SOURCE_DIR}")

file(GLOB SOURCES src/*cpp include/*.h)

add_library(KateCore STATIC ${SOURCES})


target_link_libraries(KateCore KateLLVM Utils)