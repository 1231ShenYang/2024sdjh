cmake_minimum_required(VERSION 3.10)
project(GTEST)
set(Name1 main)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_COMPILER "g++")

add_compile_options(-w -O3 -fPIC)

include_directories()
link_directories()
aux_source_directory(. SRC)

set(LINKS "-lgtest -lpthread")

add_executable(${Name1} ${SRC})
target_link_libraries(${Name1} ${LINKS})