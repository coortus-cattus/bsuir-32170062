#include "Person.h"

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    this->name = name;
}
