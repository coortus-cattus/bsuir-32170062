#ifndef HOTEL_MANAGER_H
#define HOTEL_MANAGER_H

#include "Employee.h"

class Manager : public virtual Employee {
private:
    string department;
    int managedEmployees;

public:
    Manager(string persName, int empID, string dept)
            : Person(persName), Employee(persName, empID, "Manager"), department(dept), managedEmployees(0) {}

    void performDuties() override;

    const string &getDepartment() const;

    void setDepartment(const string &department);

    int getManagedEmployees() const;
};

#endif