cmake_minimum_required(VERSION 3.28)
project(Rectangle)

# Устанавливаем стандарт C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Включаем опции для покрытия
if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    add_compile_options(--coverage)
    add_link_options(--coverage)
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    add_compile_options(-fprofile-instr-generate -fcoverage-mapping)
    add_link_options(-fprofile-instr-generate -fcoverage-mapping)
endif()


# Находим Google Test
find_package(GTest REQUIRED)

# Создаем библиотеку RectangleLib
add_library(RectangleLib
        Rectangle/Rectangle.cpp
        Rectangle/Rectangle.h
)

# Цель для основной программы
add_executable(RectangleMain
        Rectangle/main.cpp
)
target_link_libraries(RectangleMain PRIVATE RectangleLib)

# Цель для тестов
add_executable(RectangleTest
        RectangleTest/test.cpp
)
target_link_libraries(RectangleTest PRIVATE RectangleLib GTest::GTest GTest::Main)

# Включение покрытия
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fprofile-arcs -ftest-coverage")


# Включение тестов
enable_testing()
add_test(NAME RectangleTest COMMAND RectangleTest)
