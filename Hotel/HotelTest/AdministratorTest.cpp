#include "../Hotel/Administrator.h"
#include <gtest/gtest.h>

TEST(AdministratorTest, InitialValues) {
    // Создаем объект администратора с начальными значениями
    Administrator admin("Иван Иванов", "Иван", 1, "Утреняя смена", "Стойка 1");

    // Проверка начальных значений
    EXPECT_EQ(admin.getCurrentShift(), "Утреняя смена");
    EXPECT_EQ(admin.getDeskLocation(), "Стойка 1");
}

TEST(AdministratorTest, SetShift) {
    // Создаем объект администратора с начальными значениями
    Administrator admin("Иван Иванов", "Иван", 1, "Утреняя смена", "Стойка 1");

    // Устанавливаем новую смену
    admin.setCurrentShift("Вечерняя смена");
    EXPECT_EQ(admin.getCurrentShift(), "Вечерняя смена");
}

TEST(AdministratorTest, SetDeskLocation) {
    // Создаем объект администратора с начальными значениями
    Administrator admin("Иван Иванов", "Иван", 1, "Утреняя смена", "Стойка 1");

    // Устанавливаем новое местоположение
    admin.setDeskLocation("Стойка 2");
    EXPECT_EQ(admin.getDeskLocation(), "Стойка 2");
}

TEST(AdministratorTest, PerformDuties) {
    // Создаем объект администратора с начальными значениями
    Administrator admin("Иван Иванов", "Иван", 1, "Утреняя смена", "Стойка 1");

    // Выполняем обязанности администратора
    admin.performDuties();
    // После вызова performDuties() должно быть изменено на "Вечерняя смена"
    EXPECT_EQ(admin.getCurrentShift(), "Вечерняя смена");
}
