cmake_minimum_required(VERSION 3.10)

# Project name
project(MyCriteria)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

if(MSVC)
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
endif()

add_subdirectory(src/main)
add_subdirectory(src/test)

# Set the C++ standard

