#include "Reservation.h"

void Reservation::createReservation() {
    room->changeStatus("Reserved");
}

void Reservation::cancelReservation() {
    room->changeStatus("Available");
    status = "Cancelled";
}

void Reservation::completeReservation() {
    status = "Completed";
}

int Reservation::getReservationId() const {
    return reservationID;
}

const string &Reservation::getStatus() const {
    return status;
}

const string &Reservation::getCheckOutDate() const {
    return checkOutDate;
}

const string &Reservation::getCheckInDate() const {
    return checkInDate;
}

Room *Reservation::getRoom() const {
    return room;
}

Guest *Reservation::getGuest() const {
    return guest;
}
