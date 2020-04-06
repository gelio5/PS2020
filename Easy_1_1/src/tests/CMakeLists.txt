
# задаем набор исходников
set(SOURCES
        test.cpp
        )

# создаем исполняемый файл
add_executable(simple_test ${SOURCES})

# подключаем библиотеки:
# 1. Тестируемая библиотека
# 2. gest
target_link_libraries(simple_test PUBLIC Stack)
target_link_libraries(simple_test PUBLIC gtest_main)

# В solution эта библиотека лежит в tests/simple_test
set_property(TARGET simple_test PROPERTY FOLDER "tests/Easy_1_1")