#include "Payment.h"

int Payment::getPaymentId() const {
    return paymentID;
}

double Payment::getAmount() const {
    return amount;
}

const string &Payment::getMethod() const {
    return method;
}
