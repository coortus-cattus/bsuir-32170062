#include "Hotel.h"
#include <iostream>
#include "Guest.h"
#include "Room.h"
using namespace std;

void Hotel::addRoom(Room room) { rooms.push_back(room); }

const vector<Room> Hotel::listRooms() const {
    return rooms;
}

void Hotel::addGuest(const Guest& guest){
    guests.push_back(guest);
}

const vector<Guest> Hotel::listGuests() const {
    return guests;
}

void Hotel::addEmployee(Employee* employee) {
    employees.push_back(employee);
}

const vector<Employee *> Hotel::listEmployees() const {
    return employees;
}

Room* Hotel::findAvailableRoom(string type) {
    for (Room& room : rooms) {
        if (room.getStatus() == "Available" && room.getType() == type) {
            return &room;
        }
    }
    return nullptr;
}


Guest* Hotel::findGuestByName(const string& name) {
    for (Guest& guest : guests) {
        if (guest.getName() == name) {
            return &guest;
        }
    }
    return nullptr;
}