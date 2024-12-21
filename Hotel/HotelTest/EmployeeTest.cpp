#include "../Hotel/Employee.h"
#include <gtest/gtest.h>

TEST(EmployeeTest, TestInitialization) {
    // Создаем объект Employee
    Employee emp("Иван Иванов", 123, "Manager");

    // Проверяем начальные значения
    EXPECT_EQ(emp.getName(), "Иван Иванов");
    EXPECT_EQ(emp.getEmployeeID(), 123);
    EXPECT_EQ(emp.getPosition(), "Manager");
    EXPECT_EQ(emp.getSchedule(), "Not set");
}

TEST(EmployeeTest, TestAddShift) {
    // Создаем объект Employee
    Employee emp("Иван Иванов", 123, "Manager");

    // Проверяем начальное расписание
    EXPECT_EQ(emp.getSchedule(), "Not set");

    // Добавляем смену и проверяем
    emp.addShift("Morning Shift");
    EXPECT_EQ(emp.getSchedule(), "Morning Shift");

    // Добавляем еще одну смену и проверяем
    emp.addShift("Evening Shift");
    EXPECT_EQ(emp.getSchedule(), "Morning Shift, Evening Shift");
}

TEST(EmployeeTest, TestUpdateData) {
    // Создаем объект Employee
    Employee emp("Иван Иванов", 123, "Manager");

    // Проверяем начальное имя и позицию
    EXPECT_EQ(emp.getName(), "Иван Иванов");
    EXPECT_EQ(emp.getPosition(), "Manager");

    // Обновляем данные
    emp.updateData("Петр Петров", "Assistant Manager");

    // Проверяем обновленные данные
    EXPECT_EQ(emp.getName(), "Петр Петров");
    EXPECT_EQ(emp.getPosition(), "Assistant Manager");
}

TEST(EmployeeTest, TestPerformDuties) {
    // Создаем объект Employee
    Employee emp("Иван Иванов", 123, "Manager");

    // Проверяем, что performDuties не меняет состояние по умолчанию
    EXPECT_NO_THROW(emp.performDuties());
}
