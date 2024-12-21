#ifndef HOTEL_HOTEL_H
#define HOTEL_HOTEL_H

#include <string>
#include <vector>
#include "Room.h"
#include "Guest.h"
#include "Employee.h"
using namespace std;

class Hotel {
private:
    string name;
    vector<Room> rooms;
    vector<Guest> guests;
    vector<Employee*> employees;
public:
    Hotel(string hotelName) : name(hotelName) {}
    void addRoom(Room room);
    const vector<Room> listRooms() const;
    void addGuest(const Guest& guest);
    const vector<Guest> listGuests() const;
    void addEmployee(Employee* employee);
    const vector<Employee *> listEmployees() const;
    Room* findAvailableRoom(string type);
    Guest* findGuestByName(const string& name);
};


#endif
