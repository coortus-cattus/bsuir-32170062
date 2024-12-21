#include "Manager.h"

void Manager::performDuties() {
    managedEmployees++;  // Увеличиваем количество управляемых сотрудников
}

const string &Manager::getDepartment() const {
    return department;
}

void Manager::setDepartment(const string &department) {
    Manager::department = department;
}

int Manager::getManagedEmployees() const {
    return managedEmployees;
}