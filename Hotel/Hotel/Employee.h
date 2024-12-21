#ifndef HOTEL_EMPLOYEE_H
#define HOTEL_EMPLOYEE_H

#include <string>
#include "Person.h"

using namespace std;

class Employee : public virtual Person{
protected:
    int employeeID;
    string position;
    string schedule;

public:
    Employee(string persName, int empID, string empPosition)
            : Person(persName), employeeID(empID), position(empPosition), schedule("Not set") {}


    void addShift(const string& shift);
    void updateData(const string& newName, const string& newPosition);
    int getEmployeeID () const;
    virtual void performDuties(){}

    const string &getPosition() const;

    const string &getSchedule() const;
};



#endif
