#include <gtest/gtest.h>
#include "../Hotel/Reservation.h"
#include "../Hotel/Room.h"
#include "../Hotel/Guest.h"

// Тест для конструктора и геттеров
TEST(ReservationTest, ConstructorAndGettersTest) {
    Room room(101, "Single", 100);
    Guest guest("John Doe", "AB123456", "123-456-789");
    Reservation reservation(1, &guest, &room, "2024-12-25", "2024-12-30");

    EXPECT_EQ(reservation.getReservationId(), 1);
    EXPECT_EQ(reservation.getStatus(), "Active");
    EXPECT_EQ(reservation.getCheckInDate(), "2024-12-25");
    EXPECT_EQ(reservation.getCheckOutDate(), "2024-12-30");
    EXPECT_EQ(reservation.getRoom()->getNumber(), 101);
    EXPECT_EQ(reservation.getGuest()->getName(), "John Doe");
}

// Тест для метода createReservation
TEST(ReservationTest, CreateReservationTest) {
    Room room(102, "Double", 150);
    Guest guest("Jane Doe", "CD987654", "987-654-321");
    Reservation reservation(2, &guest, &room, "2024-12-20", "2024-12-25");

    reservation.createReservation();

    EXPECT_EQ(room.getStatus(), "Reserved");
}

// Тест для метода cancelReservation
TEST(ReservationTest, CancelReservationTest) {
    Room room(103, "Suite", 250);
    Guest guest("Alice", "EF123456", "555-555-555");
    Reservation reservation(3, &guest, &room, "2024-12-15", "2024-12-20");

    reservation.createReservation();
    reservation.cancelReservation();

    EXPECT_EQ(room.getStatus(), "Available");
    EXPECT_EQ(reservation.getStatus(), "Cancelled");
}

// Тест для метода completeReservation
TEST(ReservationTest, CompleteReservationTest) {
    Room room(104, "Single", 100);
    Guest guest("Bob", "GH987654", "444-444-444");
    Reservation reservation(4, &guest, &room, "2024-12-10", "2024-12-12");

    reservation.createReservation();
    reservation.completeReservation();

    EXPECT_EQ(reservation.getStatus(), "Completed");
}
