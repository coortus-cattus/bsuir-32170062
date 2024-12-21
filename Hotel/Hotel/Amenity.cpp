#include "Amenity.h"

void Amenity::changeStatus(bool newStatus) {
    availability = newStatus;
}

string Amenity::getType() const { return type; }
bool Amenity::isAvailable() const { return availability; }