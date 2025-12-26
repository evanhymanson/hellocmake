# Fetch Google Test from GitHub
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.12.1.zip
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Create test executable
add_executable(tests tests.cpp)

# Link against Google Test and your libraries
target_link_libraries(tests
  GTest::gtest_main
  mathlib
  stringlib
  geomlib
)

# Enable CMake's test runner to discover tests
include(GoogleTest)
gtest_discover_tests(tests)
