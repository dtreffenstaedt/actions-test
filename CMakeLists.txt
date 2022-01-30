cmake_minimum_required(VERSION 3.14)

project(libtest VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(libtest SHARED
  libtest_global.h
  libtest.cpp
  libtest.h
)

target_compile_definitions(libtest PRIVATE LIBTEST_LIBRARY)
