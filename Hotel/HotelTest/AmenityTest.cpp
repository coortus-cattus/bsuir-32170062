#include <gtest/gtest.h>
#include "../Hotel/Amenity.h"

TEST(AmenityTest, TestConstructor) {
    Amenity amenity("Pool", true);  // Пул доступен

    // Проверка, что объект создан с правильными значениями
    EXPECT_EQ(amenity.getType(), "Pool");
    EXPECT_TRUE(amenity.isAvailable());
}

TEST(AmenityTest, TestChangeStatus) {
    Amenity amenity("Pool", true);

    // Изменяем статус доступности
    amenity.changeStatus(false);

    // Проверяем, что статус изменился
    EXPECT_FALSE(amenity.isAvailable());
}

TEST(AmenityTest, TestGetType) {
    Amenity amenity("Pool", true);

    // Проверка правильности типа
    EXPECT_EQ(amenity.getType(), "Pool");
}

TEST(AmenityTest, TestIsAvailable) {
    Amenity amenity("Pool", true);

    // Проверка доступности
    EXPECT_TRUE(amenity.isAvailable());

    // Изменим статус на недоступный
    amenity.changeStatus(false);
    EXPECT_FALSE(amenity.isAvailable());
}
