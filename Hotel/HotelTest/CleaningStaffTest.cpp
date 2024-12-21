#include "../Hotel/CleaningStaff.h"
#include <gtest/gtest.h>

TEST(CleaningStaffTest, TestInitialization) {
    // Создаем объект CleaningStaff
    CleaningStaff staff("Мария Иванова", "Мария", 101, "Floor 2");

    // Проверяем начальные значения
    EXPECT_EQ(staff.getName(), "Мария Иванова");
    EXPECT_EQ(staff.getEmployeeID(), 101);
    EXPECT_EQ(staff.getArea(), "Floor 2");
    EXPECT_EQ(staff.getCurrentTask(), "No task assigned");
    EXPECT_EQ(staff.getCleanedRooms(), 0);
}

TEST(CleaningStaffTest, TestAssignTask) {
    // Создаем объект CleaningStaff
    CleaningStaff staff("Мария Иванова", "Мария", 101, "Floor 2");

    // Проверяем начальное задание
    EXPECT_EQ(staff.getCurrentTask(), "No task assigned");

    // Назначаем задачу и проверяем
    staff.assignTask("Clean Room 101");
    EXPECT_EQ(staff.getCurrentTask(), "Clean Room 101");
}

TEST(CleaningStaffTest, TestPerformDuties) {
    // Создаем объект CleaningStaff
    CleaningStaff staff("Мария Иванова", "Мария", 101, "Floor 2");

    // Проверяем начальное количество убранных комнат
    EXPECT_EQ(staff.getCleanedRooms(), 0);

    // Выполняем работу и проверяем
    staff.performDuties();
    EXPECT_EQ(staff.getCleanedRooms(), 1);

    staff.performDuties();
    EXPECT_EQ(staff.getCleanedRooms(), 2);
}

TEST(CleaningStaffTest, TestSetArea) {
    // Создаем объект CleaningStaff
    CleaningStaff staff("Мария Иванова", "Мария", 101, "Floor 2");

    // Проверяем начальную область
    EXPECT_EQ(staff.getArea(), "Floor 2");

    // Изменяем область и проверяем
    staff.setArea("Floor 3");
    EXPECT_EQ(staff.getArea(), "Floor 3");
}

TEST(CleaningStaffTest, TestSetCurrentTask) {
    // Создаем объект CleaningStaff
    CleaningStaff staff("Мария Иванова", "Мария", 101, "Floor 2");

    // Проверяем начальную задачу
    EXPECT_EQ(staff.getCurrentTask(), "No task assigned");

    // Назначаем новую задачу и проверяем
    staff.setCurrentTask("Clean Room 102");
    EXPECT_EQ(staff.getCurrentTask(), "Clean Room 102");
}
