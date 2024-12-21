#include <gtest/gtest.h>
#include "../Hotel/Room.h"

// Тест для конструктора
TEST(RoomTest, ConstructorTest) {
    Room room(101, "Single", 100);

    EXPECT_EQ(room.getNumber(), 101);
    EXPECT_EQ(room.getType(), "Single");
    EXPECT_EQ(room.getPrice(), 100);
    EXPECT_EQ(room.getStatus(), "Available");
}

// Тест для метода changeStatus
TEST(RoomTest, ChangeStatusTest) {
    Room room(102, "Double", 150);
    room.changeStatus("Occupied");

    EXPECT_EQ(room.getStatus(), "Occupied");
}

// Тест для метода setPrice
TEST(RoomTest, SetPriceTest) {
    Room room(103, "Suite", 200);
    room.setPrice(250);

    EXPECT_EQ(room.getPrice(), 250);
}

// Тест для геттеров
TEST(RoomTest, GettersTest) {
    Room room(104, "Single", 120);

    EXPECT_EQ(room.getNumber(), 104);
    EXPECT_EQ(room.getType(), "Single");
    EXPECT_EQ(room.getPrice(), 120);
    EXPECT_EQ(room.getStatus(), "Available");
}

