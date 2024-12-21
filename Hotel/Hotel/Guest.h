#ifndef HOTEL_GUEST_H
#define HOTEL_GUEST_H

#include <string>
#include "Room.h"
#include <vector>

using namespace std;

class Guest {
private:
    string name;
    string passportNumber;
    string phoneNumber;
    Room* currentRoom;
public:
    Guest(string name, string passport, string phone) : name(name), passportNumber(passport), phoneNumber(phone), currentRoom(
            nullptr){}
    void registerGuest(string newName, string newPassport, string newPhone);
    void updateContact(string newPhone);
    void assignRoom(Room* room);
    void releaseRoom();
    string getName() const;

    const string &getPhoneNumber() const;


};


#endif
