#include "MaintenanceRequest.h"

void MaintenanceRequest::assignEmployee(Employee* employee, int roomNum) {
    assignedEmployee = employee;
    status = "In Progress";
    roomNumber = roomNum;
}

void MaintenanceRequest::updateStatus(string newStatus) {
    status = newStatus;
}

int MaintenanceRequest::getRequestId() const {
    return requestID;
}

const string &MaintenanceRequest::getDescription() const {
    return description;
}

int MaintenanceRequest::getRoomNumber() const {
    return roomNumber;
}

void MaintenanceRequest::setDescription(const string &description) {
    MaintenanceRequest::description = description;
}

Employee *MaintenanceRequest::getAssignedEmployee() const {
    return assignedEmployee;
}

const string &MaintenanceRequest::getStatus() const {
    return status;
}

