cmake_minimum_required(VERSION 4.0)
project(fundamenta_c C)

set(CMAKE_C_STANDARD 11)

file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
        "${PROJECT_SOURCE_DIR}/src/*.c"
        "${PROJECT_SOURCE_DIR}/src/*.h"
)

add_executable(fundamenta_c ${SRC_FILES})