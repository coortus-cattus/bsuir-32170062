#include "../Hotel/Invoice.h"
#include "../Hotel/Service.h"
#include <gtest/gtest.h>

// Тесты для класса Invoice
TEST(InvoiceTest, TestInitialization) {
    Invoice invoice(1);
    EXPECT_EQ(invoice.getInvoiceID(), 1);
    EXPECT_EQ(invoice.getTotalAmount(), 0.0);
    EXPECT_TRUE(invoice.getServices().empty());
}

TEST(InvoiceTest, TestAddService) {
    Invoice invoice(1);
    Service service1("Room Cleaning", 50.0);
    Service service2("Spa Access", 100.0);

    invoice.addService(service1);
    invoice.addService(service2);

    ASSERT_EQ(invoice.getServices().size(), 2);
    EXPECT_EQ(invoice.getServices()[0].getType(), "Room Cleaning");
    EXPECT_EQ(invoice.getServices()[1].getType(), "Spa Access");
    EXPECT_EQ(invoice.getTotalAmount(), 150.0);
}
