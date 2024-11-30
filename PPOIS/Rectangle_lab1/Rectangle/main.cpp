#include "Rectangle.h"
#include <iostream>

int main() {
    // Пример использования Rectangle
    Rectangle rect1(0, 0, 10, 20);
    Rectangle rect2(5, 5, 15, 25);

    std::cout << "Rectangle 1: ";
    rect1.display();
    std::cout << "Rectangle 2: ";
    rect2.display();

    // Объединение прямоугольников
    Rectangle rect3 = rect1 + rect2;
    std::cout << "Union of Rectangle 1 and Rectangle 2: ";
    rect3.display();

    // Пересечение прямоугольников
    Rectangle rect4 = rect1 - rect2;
    std::cout << "Intersection of Rectangle 1 and Rectangle 2: ";
    rect4.display();

    // Перемещение прямоугольника
    rect1.moving(20, 30);
    std::cout << "Rectangle 1 after moving: ";
    rect1.display();

    // Изменение размера
    rect2.newSize(20, 20);
    std::cout << "Rectangle 2 after resizing: ";
    rect2.display();

    return 0;
}
