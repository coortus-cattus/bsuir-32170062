#include "Administrator.h"

void Administrator::performDuties() {
    Administrator::currentShift ="Вечерняя смена";
}

const string &Administrator::getCurrentShift() const {
    return currentShift;
}

void Administrator::setCurrentShift(const string &currentShift) {
    Administrator::currentShift = currentShift;
}

const string &Administrator::getDeskLocation() const {
    return deskLocation;
}

void Administrator::setDeskLocation(const string &deskLocation) {
    Administrator::deskLocation = deskLocation;
}
