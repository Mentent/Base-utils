# Distributed under Apache License 2.0.  See accompanying
# file LICENSE for details.

cmake_minimum_required(VERSION 3.0.0)

project(HelanBean_Base-utils)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Lib)

include_directories("include")

add_subdirectory(src)

