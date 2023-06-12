cmake_minimum_required(VERSION 3.16 FATAL_ERROR)
project(Utils LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_compile_options(/bigobj)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include" "${CMAKE_CURRENT_SOURCE_DIR}")

file(GLOB SOURCES src/*cpp include/*.h)

add_library(Utils STATIC ${SOURCES})

target_include_directories(Utils PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
target_link_libraries(KateCore KateLLVM Utils)