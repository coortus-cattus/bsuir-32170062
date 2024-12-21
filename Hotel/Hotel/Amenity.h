#ifndef HOTEL_AMENITY_H
#define HOTEL_AMENITY_H

#include <iostream>
#include <string>
using namespace std;

class Amenity {
private:
    string type;
    bool availability;

public:
    Amenity(string amenityType, bool isAvailable)
            : type(amenityType), availability(isAvailable) {}

    void changeStatus(bool newStatus);
    string getType() const;
    bool isAvailable() const;
};


#endif