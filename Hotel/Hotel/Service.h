#ifndef HOTEL_SERVICE_H
#define HOTEL_SERVICE_H

#include <iostream>
#include <string>
using namespace std;

class Service {
private:
    string type;
    double cost;

public:
    Service(string serviceType, double serviceCost) : type(serviceType), cost(serviceCost) {}

    double getCost() const;
    string getType() const;
};


#endif
