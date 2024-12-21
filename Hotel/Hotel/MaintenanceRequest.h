#ifndef HOTEL_MAINTENANCEREQUEST_H
#define HOTEL_MAINTENANCEREQUEST_H

#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

class MaintenanceRequest {
private:
    int requestID;
    int roomNumber;
    string description;
    string status;
    Employee* assignedEmployee;

public:
    MaintenanceRequest(int id, int room, string desc)
            : requestID(id), roomNumber(room), description(desc), status("New"), assignedEmployee(nullptr) {}

    void updateStatus(string newStatus);

    int getRequestId() const;

    const string &getDescription() const;

    int getRoomNumber() const;

    void setDescription(const string &description);

    void assignEmployee(Employee *employee, int roomNum);

    Employee *getAssignedEmployee() const;

    const string &getStatus() const;
};


#endif