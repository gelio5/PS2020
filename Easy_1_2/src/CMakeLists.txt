set(SOURCES
        Sort.h
        Sort.cpp)
add_library(Sorting ${SOURCES})
target_include_directories(Sorting PUBLIC ${SRC_ROOT_DIR})
source_group(TREE ${CMAKE_CURRENT_LIST_DIR} FILES ${SOURCES})
add_subdirectory(tests)