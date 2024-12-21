#include "Invoice.h"

void Invoice::addService(const Service& service) {
    services.push_back(service);
    totalAmount += service.getCost();

}

int Invoice::getInvoiceID() const {return invoiceID;}

double Invoice::getTotalAmount() const {return totalAmount;}

vector<Service> Invoice::getServices() const {return services;}