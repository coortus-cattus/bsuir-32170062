#include <gtest/gtest.h>
#include "../Hotel/Notification.h"

// Тест для конструктора и геттеров
TEST(NotificationTest, ConstructorAndGettersTest) {
    Notification notification(1, "John Doe", "Room 101 is now available", "Room Update");

    EXPECT_EQ(notification.getNotificationId(), 1);
    EXPECT_EQ(notification.getRecipient(), "John Doe");
    EXPECT_EQ(notification.getMessage(), "Room 101 is now available");
    EXPECT_EQ(notification.getType(), "Room Update");
}

// Тест для геттера getNotificationId
TEST(NotificationTest, GetNotificationIdTest) {
    Notification notification(2, "Jane Doe", "Your booking is confirmed", "Booking Update");

    EXPECT_EQ(notification.getNotificationId(), 2);
}

// Тест для геттера getRecipient
TEST(NotificationTest, GetRecipientTest) {
    Notification notification(3, "Alice", "Check-in reminder", "Reminder");

    EXPECT_EQ(notification.getRecipient(), "Alice");
}

// Тест для геттера getMessage
TEST(NotificationTest, GetMessageTest) {
    Notification notification(4, "Bob", "Payment received", "Payment Update");

    EXPECT_EQ(notification.getMessage(), "Payment received");
}

// Тест для геттера getType
TEST(NotificationTest, GetTypeTest) {
    Notification notification(5, "Charlie", "Special offer", "Promotion");

    EXPECT_EQ(notification.getType(), "Promotion");
}
