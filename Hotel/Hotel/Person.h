#ifndef HOTEL_PERSON_H
#define HOTEL_PERSON_H

#include <string>
using namespace std;

class Person {
private:
    string name;
public:
    Person(string persName) : name(persName) {}

    virtual void performDuties() {
    }

    const string &getName() const;
    void setName(const string &name);
};

#endif
