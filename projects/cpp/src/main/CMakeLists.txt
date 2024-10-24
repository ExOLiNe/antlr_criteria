include(FetchContent)
# Set the paths to your lib and runtime folders
set(ANTLR4_RUNTIME_LIB_DIR "${CMAKE_SOURCE_DIR}/lib")
set(ANTLR4_RUNTIME_LIB_STATIC "${ANTLR4_RUNTIME_LIB_DIR}/antlr4-runtime-static.lib")
set(ANTLR4_RUNTIME_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/runtime")
set(GENERATED_SOURCES_DIR "${CMAKE_SOURCE_DIR}/generated/grammar")
set(TEST_PATH "${CMAKE_SOURCE_DIR}/../../tests")

set(TARGET "lib")
set(TARGET_EXE "lib_exe")


FetchContent_Declare(
        jsoncpp
        GIT_REPOSITORY https://github.com/open-source-parsers/jsoncpp.git
        GIT_TAG 1.9.6
)
FetchContent_MakeAvailable(jsoncpp)
# set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

# Link the ANTLR4 runtime library
link_directories(${ANTLR4_RUNTIME_LIB_STATIC})

file(GLOB GENERATED_SOURCES "${GENERATED_SOURCES_DIR}/*.cpp")

# Add your main.cpp file
add_library(${TARGET} STATIC lib.cpp lib.h ${GENERATED_SOURCES})

target_sources(${TARGET} PRIVATE
        MyCriteriaVisitorImpl.cpp)

target_compile_definitions(${TARGET} PUBLIC TEST_PATH="${TEST_PATH}")

# Include runtime headers
#include_directories(${ANTLR4_RUNTIME_INCLUDE_DIR})
#include_directories(${GENERATED_SOURCES_DIR})
target_include_directories(${TARGET} PUBLIC ${ANTLR4_RUNTIME_INCLUDE_DIR})
target_include_directories(${TARGET} PUBLIC ${GENERATED_SOURCES_DIR})
target_include_directories(${TARGET} PUBLIC ${CMAKE_SOURCE_DIR}/src/main)

# Link the ANTLR runtime library
target_link_libraries(${TARGET} ${ANTLR4_RUNTIME_LIB_STATIC} jsoncpp_lib)
