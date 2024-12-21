#ifndef HOTEL_ADMINISTRATOR_H
#define HOTEL_ADMINISTRATOR_H

#include "Employee.h"
#include "Guest.h"

class Administrator : public virtual Employee {
private:
    string currentShift;
    string deskLocation;
public:
    Administrator(string persName, string name, int id, string shift, string desk)
            : Person(persName), Employee(name, id, "Administrator"), currentShift(shift), deskLocation(desk) {}

    void performDuties() override;

    const string &getCurrentShift() const;

    void setCurrentShift(const string &currentShift);

    const string &getDeskLocation() const;

    void setDeskLocation(const string &deskLocation);
};


#endif