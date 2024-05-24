project(Google_test)

add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Google_Tests_run
        test.cpp
        ../Bus.cpp
        ../Car.cpp)

target_link_libraries(Google_Tests_run gtest gtest_main)
