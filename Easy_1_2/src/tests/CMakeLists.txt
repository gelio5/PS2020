set(SOURCES
        test.cpp)
add_executable(simple_test ${SOURCES})
target_link_libraries(simple_test PUBLIC Sorting)
target_link_libraries(simple_test PUBLIC gtest_main)
