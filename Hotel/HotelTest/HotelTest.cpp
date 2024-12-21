#include <gtest/gtest.h>
#include "../Hotel/Hotel.h"
#include "../Hotel/Room.h"
#include "../Hotel/Guest.h"
#include "../Hotel/Employee.h"

// Тест для добавления номера и проверки списка
TEST(HotelTest, AddRoomAndListRoomsTest) {
    Hotel hotel("Grand Hotel");
    Room room1(101, "Single", 100);
    Room room2(102, "Double", 150);

    hotel.addRoom(room1);
    hotel.addRoom(room2);

    const vector<Room> rooms = hotel.listRooms();
    EXPECT_EQ(rooms.size(), 2);
    EXPECT_EQ(rooms[0].getNumber(), 101);
    EXPECT_EQ(rooms[1].getNumber(), 102);
}

// Тест для добавления гостя и проверки списка
TEST(HotelTest, AddGuestAndListGuestsTest) {
    Hotel hotel("Grand Hotel");
    Guest guest1("John Doe", "AB123456", "123-456-789");
    Guest guest2("Jane Smith", "CD987654", "987-654-321");

    hotel.addGuest(guest1);
    hotel.addGuest(guest2);

    const vector<Guest> guests = hotel.listGuests();
    EXPECT_EQ(guests.size(), 2);
    EXPECT_EQ(guests[0].getName(), "John Doe");
    EXPECT_EQ(guests[1].getName(), "Jane Smith");
}

// Тест для добавления сотрудника и проверки списка
TEST(HotelTest, AddEmployeeAndListEmployeesTest) {
    Hotel hotel("Grand Hotel");

    // Создаем сотрудников с данными
    Employee employee1("Alice", 1, "Manager");
    Employee employee2("Bob", 2, "Housekeeper");

    hotel.addEmployee(&employee1);
    hotel.addEmployee(&employee2);

    const vector<Employee*> employees = hotel.listEmployees();
    EXPECT_EQ(employees.size(), 2);
    EXPECT_EQ(employees[0]->getName(), "Alice");
    EXPECT_EQ(employees[1]->getName(), "Bob");
}

// Тест для добавления смены сотруднику и обновления данных
TEST(HotelTest, EmployeeAddShiftAndUpdateDataTest) {
    Hotel hotel("Grand Hotel");

    Employee employee("Charlie", 3, "Receptionist");

    hotel.addEmployee(&employee);

    // Добавление смены
    employee.addShift("Morning");
    EXPECT_EQ(employee.getSchedule(), "Morning");

    // Обновление данных сотрудника
    employee.updateData("Charlie Brown", "Senior Receptionist");
    EXPECT_EQ(employee.getPosition(), "Senior Receptionist");
    EXPECT_EQ(employee.getName(), "Charlie Brown");
}

// Тест для поиска доступного номера



// Тест для поиска гостя по имени
TEST(HotelTest, FindGuestByNameTest) {
    Hotel hotel("Grand Hotel");
    Guest guest1("John Doe", "AB123456", "123-456-789");
    Guest guest2("Jane Smith", "CD987654", "987-654-321");

    hotel.addGuest(guest1);
    hotel.addGuest(guest2);

    Guest* foundGuest = hotel.findGuestByName("John Doe");
    EXPECT_NE(foundGuest, nullptr);
    EXPECT_EQ(foundGuest->getName(), "John Doe");

    Guest* notFoundGuest = hotel.findGuestByName("Alice");
    EXPECT_EQ(notFoundGuest, nullptr);  // Гость с таким именем не должен быть найден
}