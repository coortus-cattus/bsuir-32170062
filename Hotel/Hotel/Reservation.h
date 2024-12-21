#ifndef HOTEL_RESERVATION_H
#define HOTEL_RESERVATION_H

#include "Guest.h"
#include "Room.h"
#include <string>
#include <iostream>
using namespace std;

class Reservation {
private:
    int reservationID;
    Guest* guest;
    Room* room;
    string checkInDate;
    string checkOutDate;
    string status;

public:
    Reservation(int id, Guest* g, Room* r, string checkIn, string checkOut)
            : reservationID(id), guest(g), room(r), checkInDate(checkIn), checkOutDate(checkOut), status("Active") {}

    void createReservation();
    void cancelReservation();
    void completeReservation();

    int getReservationId() const;

    const string &getStatus() const;

    const string &getCheckOutDate() const;

    const string &getCheckInDate() const;

    Room *getRoom() const;

    Guest *getGuest() const;
};


#endif