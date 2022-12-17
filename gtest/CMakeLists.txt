cmake_minimum_required(VERSION 3.14)
project(my_project)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

enable_testing()

add_executable(
  hello_test
  hellotest.cpp
)

find_package(GTest CONFIG REQUIRED)
target_link_libraries(hello_test PRIVATE GTest::gmock GTest::gtest GTest::gmock_main GTest::gtest_main)
