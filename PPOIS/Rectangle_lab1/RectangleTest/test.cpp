#include <gtest/gtest.h>
#include "../Rectangle/Rectangle.h"

// Тестирование конструктора по умолчанию
TEST(RectangleTest, DefaultConstructor) {
    Rectangle rect;
    EXPECT_EQ(rect.coordinates()[0][0], 0);
    EXPECT_EQ(rect.coordinates()[0][1], 0);
    EXPECT_EQ(rect.coordinates()[1][0], 0);
    EXPECT_EQ(rect.coordinates()[1][1], 0);
}

// Тестирование конструктора с параметрами
TEST(RectangleTest, ParameterizedConstructor) {
    Rectangle rect(1, 2, 3, 4);
    EXPECT_EQ(rect.coordinates()[0][0], 1);
    EXPECT_EQ(rect.coordinates()[0][1], 2);
    EXPECT_EQ(rect.coordinates()[1][0], 4);
    EXPECT_EQ(rect.coordinates()[1][1], 6);
}

// Тестирование метода moving
TEST(RectangleTest, Moving) {
    Rectangle rect(1, 2, 3, 4);
    rect.moving(10, 20);
    EXPECT_EQ(rect.coordinates()[0][0], 10);
    EXPECT_EQ(rect.coordinates()[0][1], 20);
    EXPECT_EQ(rect.coordinates()[1][0], 13);
    EXPECT_EQ(rect.coordinates()[1][1], 24);
}

// Тестирование метода newSize
TEST(RectangleTest, NewSize) {
    Rectangle rect(1, 2, 3, 4);
    rect.newSize(5, 6);
    EXPECT_EQ(rect.coordinates()[0][0], 1);
    EXPECT_EQ(rect.coordinates()[0][1], 2);
    EXPECT_EQ(rect.coordinates()[1][0], 6);
    EXPECT_EQ(rect.coordinates()[1][1], 8);
}

// Тестирование префиксного инкремента
TEST(RectangleTest, PrefixIncrement) {
    Rectangle rect(1, 2, 3, 4);
    ++rect;
    EXPECT_EQ(rect.coordinates()[1][0], 5); // Ширина увеличена
    EXPECT_EQ(rect.coordinates()[1][1], 7); // Высота увеличена
}

// Тестирование постфиксного инкремента
TEST(RectangleTest, PostfixIncrement) {
    Rectangle rect(1, 2, 3, 4);
    Rectangle temp = rect++;
    EXPECT_EQ(temp.coordinates()[1][0], 4);
    EXPECT_EQ(temp.coordinates()[1][1], 6);
    EXPECT_EQ(rect.coordinates()[1][0], 5);
    EXPECT_EQ(rect.coordinates()[1][1], 7);
}

// Тестирование префиксного декремента
TEST(RectangleTest, PrefixDecrement) {
    Rectangle rect(1, 2, 3, 4);
    --rect;
    EXPECT_EQ(rect.coordinates()[1][0], 3); // Ширина уменьшена
    EXPECT_EQ(rect.coordinates()[1][1], 5); // Высота уменьшена
}

// Тестирование постфиксного декремента
TEST(RectangleTest, PostfixDecrement) {
    Rectangle rect(1, 2, 3, 4);
    Rectangle temp = rect--;
    EXPECT_EQ(temp.coordinates()[1][0], 4);
    EXPECT_EQ(temp.coordinates()[1][1], 6);
    EXPECT_EQ(rect.coordinates()[1][0], 3);
    EXPECT_EQ(rect.coordinates()[1][1], 5);
}

// Тестирование оператора +
TEST(RectangleTest, AdditionOperator) {
    Rectangle rect1(1, 1, 4, 4);
    Rectangle rect2(3, 3, 2, 2);
    Rectangle result = rect1 + rect2;

    EXPECT_EQ(result.coordinates()[0][0], 1);
    EXPECT_EQ(result.coordinates()[0][1], 1);
    EXPECT_EQ(result.coordinates()[1][0], 5);
    EXPECT_EQ(result.coordinates()[1][1], 5);
}

// Тестирование оператора +=
TEST(RectangleTest, AdditionAssignmentOperator) {
    Rectangle rect1(1, 1, 4, 4);
    Rectangle rect2(3, 3, 2, 2);
    rect1 += rect2;

    EXPECT_EQ(rect1.coordinates()[0][0], 1);
    EXPECT_EQ(rect1.coordinates()[0][1], 1);
    EXPECT_EQ(rect1.coordinates()[1][0], 5);
    EXPECT_EQ(rect1.coordinates()[1][1], 5);
}

// Тестирование оператора -
TEST(RectangleTest, SubtractionOperator) {
    Rectangle rect1(1, 1, 4, 4);
    Rectangle rect2(3, 3, 2, 2);
    Rectangle result = rect1 - rect2;

    EXPECT_EQ(result.coordinates()[0][0], 3);
    EXPECT_EQ(result.coordinates()[0][1], 3);
    EXPECT_EQ(result.coordinates()[1][0], 5);
    EXPECT_EQ(result.coordinates()[1][1], 5);
}

// Тестирование оператора -=
TEST(RectangleTest, SubtractionAssignmentOperator) {
    Rectangle rect1(1, 1, 4, 4);
    Rectangle rect2(3, 3, 2, 2);
    rect1 -= rect2;

    EXPECT_EQ(rect1.coordinates()[0][0], 3);
    EXPECT_EQ(rect1.coordinates()[0][1], 3);
    EXPECT_EQ(rect1.coordinates()[1][0], 5);
    EXPECT_EQ(rect1.coordinates()[1][1], 5);
}

// Тестирование операторов == и !=
TEST(RectangleTest, EqualityOperators) {
    Rectangle rect1(1, 1, 4, 4);
    Rectangle rect2(1, 1, 4, 4);
    Rectangle rect3(2, 2, 5, 5);

    EXPECT_TRUE(rect1 == rect2);
    EXPECT_FALSE(rect1 != rect2);
    EXPECT_FALSE(rect1 == rect3);
    EXPECT_TRUE(rect1 != rect3);
}

// Тестирование оператора присваивания
TEST(RectangleTest, AssignmentOperator) {
    Rectangle rect1(1, 1, 4, 4);
    Rectangle rect2;
    rect2 = rect1;

    EXPECT_EQ(rect2.coordinates()[0][0], 1);
    EXPECT_EQ(rect2.coordinates()[0][1], 1);
    EXPECT_EQ(rect2.coordinates()[1][0], 5);
    EXPECT_EQ(rect2.coordinates()[1][1], 5);
}

// Тестирование конструктора копирования
TEST(RectangleTest, CopyConstructor) {
    Rectangle rect1(1, 1, 4, 4);
    Rectangle rect2 = rect1; // Копирование через конструктор копирования

    EXPECT_EQ(rect2.coordinates()[0][0], 1);
    EXPECT_EQ(rect2.coordinates()[0][1], 1);
    EXPECT_EQ(rect2.coordinates()[1][0], 5);
    EXPECT_EQ(rect2.coordinates()[1][1], 5);
}

// Тестирование оператора присваивания
TEST(RectangleTest, AssignmentOperatorTest) {
    Rectangle rect1(1, 1, 4, 4);
    Rectangle rect2;
    rect2 = rect1; // Используем оператор присваивания

    EXPECT_EQ(rect2.coordinates()[0][0], 1);
    EXPECT_EQ(rect2.coordinates()[0][1], 1);
    EXPECT_EQ(rect2.coordinates()[1][0], 5);
    EXPECT_EQ(rect2.coordinates()[1][1], 5);
}
