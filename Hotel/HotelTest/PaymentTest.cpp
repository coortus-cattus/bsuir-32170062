#include <gtest/gtest.h>
#include "../Hotel/Payment.h"

// Тест для конструктора и геттеров
TEST(PaymentTest, ConstructorAndGettersTest) {
    Payment payment(1, 150.75, "Credit Card");

    EXPECT_EQ(payment.getPaymentId(), 1);
    EXPECT_EQ(payment.getAmount(), 150.75);
    EXPECT_EQ(payment.getMethod(), "Credit Card");
}

// Тест для геттера getPaymentId
TEST(PaymentTest, GetPaymentIdTest) {
    Payment payment(2, 200.50, "Cash");

    EXPECT_EQ(payment.getPaymentId(), 2);
}

// Тест для геттера getAmount
TEST(PaymentTest, GetAmountTest) {
    Payment payment(3, 300.25, "Debit Card");

    EXPECT_EQ(payment.getAmount(), 300.25);
}

// Тест для геттера getMethod
TEST(PaymentTest, GetMethodTest) {
    Payment payment(4, 400.00, "Bank Transfer");

    EXPECT_EQ(payment.getMethod(), "Bank Transfer");
}
