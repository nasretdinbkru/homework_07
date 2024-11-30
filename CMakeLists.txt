cmake_minimum_required(VERSION 3.3..3.5)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(POLICY CMP0135)
    cmake_policy(SET CMP0135 NEW)
    set(CMAKE_POLICY_DEFAULT_CMP0135 NEW)
endif()

include(GoogleTest)

set (TEST_LIBS GTest::gtest GTest::gtest_main)

enable_testing()

project(containers CXX)
add_subdirectory(src)
add_subdirectory(tests)

