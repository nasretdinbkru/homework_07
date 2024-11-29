cmake_minimum_required(VERSION 3.3)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(GoogleTest)

set (TEST_LIBS GTest::gtest GTest::gtest_main)

enable_testing()

project(containers CXX)
add_subdirectory(src)
add_subdirectory(tests)



#add_executable(containers main.cpp
#        dynarray.h
#)
#target_link_libraries(containers PRIVATE linkedlist)
#target_link_libraries(containers PRIVATE dynarray)
#

