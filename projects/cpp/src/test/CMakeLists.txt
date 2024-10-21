# Fetch GoogleTest
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Add your test executable
enable_testing()

add_executable(unit_tests
        GrammarTest.cpp
        )

# Link GoogleTest and ANTLR runtime
target_link_libraries(unit_tests gtest gtest_main lib)

# Add tests
include(GoogleTest)
gtest_discover_tests(unit_tests)
