#include "gtest/gtest.h"
#include "../Hotel/Manager.h"

// Тестирование конструктора и инициализации данных
TEST(ManagerTest, ConstructorTest) {
    Manager manager("John Doe", 1, "HR");

    EXPECT_EQ(manager.getName(), "John Doe");
    EXPECT_EQ(manager.getPosition(), "Manager");
    EXPECT_EQ(manager.getDepartment(), "HR");
    EXPECT_EQ(manager.getEmployeeID(), 1);
    EXPECT_EQ(manager.getManagedEmployees(), 0);  // Изначально должно быть 0
}

// Тестирование изменения отдела
TEST(ManagerTest, SetDepartmentTest) {
    Manager manager("John Doe", 1, "HR");

    manager.setDepartment("Finance");
    EXPECT_EQ(manager.getDepartment(), "Finance");
}

// Тестирование метода performDuties (увеличение управляемых сотрудников)
TEST(ManagerTest, PerformDutiesTest) {
    Manager manager("John Doe", 1, "HR");

    // До выполнения обязанностей
    EXPECT_EQ(manager.getManagedEmployees(), 0);

    manager.performDuties();  // Увеличивает количество управляемых сотрудников
    EXPECT_EQ(manager.getManagedEmployees(), 1);

    manager.performDuties();  // Еще раз
    EXPECT_EQ(manager.getManagedEmployees(), 2);
}