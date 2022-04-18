include(FetchContent)

set(gtest_force_shared_crt on)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(config_creation_tests config_creation_tests.cpp)

target_link_libraries(config_creation_tests
 PRIVATE
  GTest::GTest
  config_creation_lib)

# Add all tests created using GoogleTest to CTEST.
include(GoogleTest)
gtest_discover_tests(config_creation_tests)