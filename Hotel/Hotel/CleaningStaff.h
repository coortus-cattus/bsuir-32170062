#ifndef HOTEL_CLEANINGSTAFF_H
#define HOTEL_CLEANINGSTAFF_H

#include "Employee.h"

class CleaningStaff : public virtual Employee {
private:
    string area;
    string currentTask;
    int cleanedRooms;

public:
    CleaningStaff(string persName, string name, int id, string responsibility)
            : Person(persName), Employee(name, id, "Cleaning Staff"), area(responsibility),
              currentTask("No task assigned"), cleanedRooms(0) {}

    void performDuties() override;

    void assignTask(const string& task);

    const string &getArea() const;

    void setArea(const string &area);

    const string &getCurrentTask() const;

    void setCurrentTask(const string &currentTask);

    int getCleanedRooms() const;
};


#endif
