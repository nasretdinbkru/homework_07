include(GoogleTest)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(containers_test
        test_containers.cpp
)

target_include_directories(containers_test PRIVATE "${gtest_INCLUDE_DIRS_RELEASE}")

target_link_libraries(
        containers_test
        GTest::gtest_main
)




