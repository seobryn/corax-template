cmake_minimum_required(VERSION 3.15.0 FATAL_ERROR)

project(corax
        LANGUAGES CXX
        VERSION 1.0.0
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

set(EXECUTABLE_NAME "corax")

find_package(Boost REQUIRED)

add_subdirectory(src)