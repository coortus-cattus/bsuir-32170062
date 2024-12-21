#include "../Hotel/MaintenanceRequest.h"
#include "../Hotel/Employee.h"
#include <gtest/gtest.h>

// Тесты для класса MaintenanceRequest
TEST(MaintenanceRequestTest, TestInitialization) {
    MaintenanceRequest request(1, 101, "Fix air conditioning");

    EXPECT_EQ(request.getRequestId(), 1);
    EXPECT_EQ(request.getRoomNumber(), 101);
    EXPECT_EQ(request.getDescription(), "Fix air conditioning");
    EXPECT_EQ(request.getStatus(), "New");
    EXPECT_EQ(request.getAssignedEmployee(), nullptr); // Проверка, что сотрудник не назначен
}

TEST(MaintenanceRequestTest, TestUpdateStatus) {
    MaintenanceRequest request(1, 101, "Fix air conditioning");
    request.updateStatus("Completed");

    EXPECT_EQ(request.getStatus(), "Completed");
}

TEST(MaintenanceRequestTest, TestAssignEmployee) {
    Employee employee("John Doe", 123, "Technician");
    MaintenanceRequest request(1, 101, "Fix air conditioning");

    request.assignEmployee(&employee, 102);

    EXPECT_EQ(request.getAssignedEmployee(), &employee);
    EXPECT_EQ(request.getStatus(), "In Progress");
    EXPECT_EQ(request.getRoomNumber(), 102);
}

TEST(MaintenanceRequestTest, TestSetDescription) {
    MaintenanceRequest request(1, 101, "Fix air conditioning");
    request.setDescription("Fix plumbing");

    EXPECT_EQ(request.getDescription(), "Fix plumbing");
}
