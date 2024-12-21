#include "CleaningStaff.h"

void CleaningStaff::performDuties(){
    cleanedRooms++;
}

void CleaningStaff::assignTask(const string& task) {
    currentTask = task;
}

const string &CleaningStaff::getArea() const {
    return area;
}

void CleaningStaff::setArea(const string &area) {
    CleaningStaff::area = area;
}

const string &CleaningStaff::getCurrentTask() const {
    return currentTask;
}

void CleaningStaff::setCurrentTask(const string &currentTask) {
    CleaningStaff::currentTask = currentTask;
}

int CleaningStaff::getCleanedRooms() const {
    return cleanedRooms;
}

