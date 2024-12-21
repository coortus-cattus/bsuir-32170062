#include <gtest/gtest.h>
#include "../Hotel/Service.h"

// Тест для конструктора и геттеров
TEST(ServiceTest, ConstructorAndGettersTest) {
    Service service("Room Service", 50.75);

    EXPECT_EQ(service.getType(), "Room Service");
    EXPECT_EQ(service.getCost(), 50.75);
}

// Тест для геттера getCost
TEST(ServiceTest, GetCostTest) {
    Service service("Spa", 120.50);

    EXPECT_EQ(service.getCost(), 120.50);
}

// Тест для геттера getType
TEST(ServiceTest, GetTypeTest) {
    Service service("Cleaning", 30.00);

    EXPECT_EQ(service.getType(), "Cleaning");
}
