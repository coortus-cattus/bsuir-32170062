#ifndef HOTEL_INVOICE_H
#define HOTEL_INVOICE_H

#include <iostream>
#include "Service.h"
#include <vector>
using namespace std;

class Invoice {
private:
    int invoiceID;
    vector<Service> services;
    double totalAmount;

public:
    Invoice(int id) : invoiceID(id), totalAmount(0.0) {}

    void addService(const Service& service);
    int getInvoiceID() const;
    double getTotalAmount() const;
    vector<Service> getServices() const;
};


#endif