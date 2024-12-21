#ifndef HOTEL_PAYMENT_H
#define HOTEL_PAYMENT_H

#include <iostream>
#include <string>
using namespace std;

class Payment {
private:
    int paymentID;
    double amount;
    string method;

public:
    Payment(int id, double amt, string payMethod) : paymentID(id), amount(amt), method(payMethod) {}

    int getPaymentId() const;

    double getAmount() const;

    const string &getMethod() const;


};


#endif