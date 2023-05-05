cmake_minimum_required(VERSION 3.0)
project(order-book)

set(CMAKE_CXX_STANDARD 14)
FILE(GLOB MyCPPSources *.cpp)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
enable_testing()
add_executable(order-book ${MyCPPSources})

target_link_libraries(
  order-book
  GTest::gtest_main
)
include(GoogleTest)
gtest_discover_tests(order-book)