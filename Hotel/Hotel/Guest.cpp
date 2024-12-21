#include "Guest.h"
using namespace std;

string Guest::getName() const{ return name; }

void Guest::registerGuest(string newName, string newPassport, string newPhone){
    name = newName;
    passportNumber = newPassport;
    phoneNumber = newPhone;
}

void Guest::updateContact(string newPhone){
    phoneNumber = newPhone;
}

void Guest::assignRoom(Room* room){
    if (currentRoom){
        return;
    }
    currentRoom = room;
    room->changeStatus("Occupied");
}

void Guest::releaseRoom(){
    if (currentRoom){
        currentRoom->changeStatus("Available");
        currentRoom = nullptr;
    } else{
        return;
    }
}

const string &Guest::getPhoneNumber() const {
    return phoneNumber;
}
