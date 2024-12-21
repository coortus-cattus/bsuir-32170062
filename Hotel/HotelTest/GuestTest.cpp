#include <gtest/gtest.h>
#include "../Hotel/Guest.h"
#include "../Hotel/Room.h"

// Тест для конструктора
TEST(GuestTest, ConstructorTest) {
    Guest guest("John Doe", "AB123456", "123-456-789");

    EXPECT_EQ(guest.getName(), "John Doe");
    EXPECT_EQ(guest.getPhoneNumber(), "123-456-789");
}

// Тест для метода registerGuest
TEST(GuestTest, RegisterGuestTest) {
    Guest guest("John Doe", "AB123456", "123-456-789");
    guest.registerGuest("Jane Doe", "CD987654", "987-654-321");

    EXPECT_EQ(guest.getName(), "Jane Doe");
    EXPECT_EQ(guest.getPhoneNumber(), "987-654-321");
}

// Тест для метода updateContact
TEST(GuestTest, UpdateContactTest) {
    Guest guest("John Doe", "AB123456", "123-456-789");
    guest.updateContact("555-555-555");

    EXPECT_EQ(guest.getPhoneNumber(), "555-555-555");
}

// Тест для метода assignRoom
TEST(GuestTest, AssignRoomTest) {
    Room room(101, "Single", 100);
    Guest guest("John Doe", "AB123456", "123-456-789");

    guest.assignRoom(&room);

    EXPECT_EQ(guest.getPhoneNumber(), "123-456-789");
    EXPECT_EQ(room.getStatus(), "Occupied");
}

// Тест для метода releaseRoom
TEST(GuestTest, ReleaseRoomTest) {
    Room room(102, "Double", 150);
    Guest guest("John Doe", "AB123456", "123-456-789");
    guest.assignRoom(&room);
    guest.releaseRoom();

    EXPECT_EQ(room.getStatus(), "Available");
    EXPECT_EQ(guest.getPhoneNumber(), "123-456-789");
}
