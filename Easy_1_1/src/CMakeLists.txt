
# задаем набор исходников
set(SOURCES
        Stack.h
        Stack.cpp
        )

add_library(Stack ${SOURCES})

# добавлем путь к исходникам для возожности подключения библиотеки
target_include_directories(Stack PUBLIC ${SRC_ROOT_DIR})

# группируем исходники по типу по категориям
source_group(TREE ${CMAKE_CURRENT_LIST_DIR} FILES ${SOURCES})

# В solution эта библиотека лежит в simple_project
#set_property(TARGET Stack PROPERTY FOLDER "simple_project")

# включаем в сборку проекnа подпроект с тестами
add_subdirectory(tests)