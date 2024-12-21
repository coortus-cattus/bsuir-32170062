#include "Employee.h"


void Employee::addShift(const string& shift) {
    if (schedule == "Not set") {
        schedule = shift;
    } else {
        schedule += ", " + shift;
    }
}


void Employee::updateData(const string& newName, const string& newPosition) {
    position = newPosition;
    setName(newName);
}

int Employee::getEmployeeID () const {
    return employeeID;
}

const string &Employee::getPosition() const {
    return position;
}

const string &Employee::getSchedule() const {
    return schedule;
}

