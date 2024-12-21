#include <gtest/gtest.h>
#include "../Hotel/Person.h"

// Тест для конструктора и геттеров
TEST(PersonTest, ConstructorAndGettersTest) {
    Person person("John Doe");

    EXPECT_EQ(person.getName(), "John Doe");
}

// Тест для сеттера setName
TEST(PersonTest, SetNameTest) {
    Person person("Jane Doe");

    person.setName("Alice");

    EXPECT_EQ(person.getName(), "Alice");
}