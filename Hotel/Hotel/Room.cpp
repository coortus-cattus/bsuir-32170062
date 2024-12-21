#include "Room.h"

void Room::changeStatus(string newStatus) { status = newStatus; }
int Room::getNumber() const { return number; }
string Room::getStatus() const { return status; };
int Room::getPrice() const { return price; };
string Room::getType() const { return type; }
void Room::setPrice(int newPrice) { price = newPrice; };
