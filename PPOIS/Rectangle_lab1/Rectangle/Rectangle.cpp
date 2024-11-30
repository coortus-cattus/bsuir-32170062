#include "Rectangle.h"
#include <algorithm>

//
int** Rectangle::coordinates() {
    if (coords) {
        for (int i = 0; i < 2; ++i) {
            delete[] coords[i];
        }
        delete[] coords;
    }

    coords = new int*[2];
    for (int i = 0; i < 2; ++i) {
        coords[i] = new int[2];
    }
    coords[0][0] = lower_left_corner_x;
    coords[0][1] = lower_left_corner_y;
    coords[1][0] = lower_left_corner_x + width;
    coords[1][1] = lower_left_corner_y + height;
    return coords;
}

void Rectangle::moving(int new_coordinate_x, int new_coordinate_y) {
    lower_left_corner_x = new_coordinate_x;
    lower_left_corner_y = new_coordinate_y;
}

void Rectangle::newSize(int new_width, int new_height) {
    height = new_height;
    width = new_width;
}

Rectangle& Rectangle::operator++() {
    height++;
    width++;
    return *this;
}

Rectangle Rectangle::operator++(int) {
    Rectangle temp = *this;
    height++;
    width++;
    return temp;
}

Rectangle& Rectangle::operator--() {
    height--;
    width--;
    return *this;
}

Rectangle Rectangle::operator--(int) {
    Rectangle temp = *this;
    height--;
    width--;
    return temp;
}

Rectangle Rectangle::operator+(const Rectangle& other) const {
    int new_x = std::min(lower_left_corner_x, other.lower_left_corner_x);
    int new_y = std::min(lower_left_corner_y, other.lower_left_corner_y);
    int new_width = std::max(lower_left_corner_x + width, other.lower_left_corner_x + other.width) - new_x;
    int new_height = std::max(lower_left_corner_y + height, other.lower_left_corner_y + other.height) - new_y;
    return Rectangle(new_x, new_y, new_width, new_height);
}

Rectangle& Rectangle::operator+=(const Rectangle& other) {
    int new_x = std::min(lower_left_corner_x, other.lower_left_corner_x);
    int new_y = std::min(lower_left_corner_y, other.lower_left_corner_y);
    int new_width = std::max(lower_left_corner_x + width, other.lower_left_corner_x + other.width) - new_x;
    int new_height = std::max(lower_left_corner_y + height, other.lower_left_corner_y + other.height) - new_y;

    // Обновляем текущий объект
    lower_left_corner_x = new_x;
    lower_left_corner_y = new_y;
    width = new_width;
    height = new_height;

    return *this; // Возвращаем текущий объект
}

Rectangle Rectangle::operator-(const Rectangle& other) const {
    int new_x = std::max(lower_left_corner_x, other.lower_left_corner_x);
    int new_y = std::max(lower_left_corner_y, other.lower_left_corner_y);
    int new_right = std::min(lower_left_corner_x + width, other.lower_left_corner_x + other.width);
    int new_top = std::min(lower_left_corner_y + height, other.lower_left_corner_y + other.height);

    if (new_x < new_right && new_y < new_top) {
        return Rectangle(new_x, new_y, new_right - new_x, new_top - new_y); // Пересечение существует
    } else {
        return Rectangle(); // Нет пересечения, возвращаем пустой прямоугольник
    }
}

Rectangle& Rectangle::operator-=(const Rectangle& other) {
    *this = *this - other; // Используем оператор - для обновления текущего объекта
    return *this;
}

bool Rectangle::operator==(const Rectangle& other) const {
    return (lower_left_corner_x == other.lower_left_corner_x &&
            lower_left_corner_y == other.lower_left_corner_y &&
            width == other.width &&
            height == other.height);
}

bool Rectangle::operator!=(const Rectangle& other) const {
    return !(*this == other);  // Можно использовать уже реализованный оператор ==
}

Rectangle& Rectangle::operator=(const Rectangle& other) {
    if (this != &other) { // Проверка на самоприсваивание
        // Освобождение старых ресурсов
        if (coords) {
            for (int i = 0; i < 2; ++i) {
                delete[] coords[i];
            }
            delete[] coords;
        }

        // Копирование данных
        lower_left_corner_x = other.lower_left_corner_x;
        lower_left_corner_y = other.lower_left_corner_y;
        height = other.height;
        width = other.width;

        // Копирование массива координат
        if (other.coords) {
            coords = new int*[2];
            for (int i = 0; i < 2; ++i) {
                coords[i] = new int[2];
                for (int j = 0; j < 2; ++j) {
                    coords[i][j] = other.coords[i][j];
                }
            }
        } else {
            coords = nullptr;
        }
    }
    return *this;
}

Rectangle::~Rectangle() {
    if (coords) {
        for (int i = 0; i < 2; ++i) {
            delete[] coords[i];
        }
        delete[] coords;
    }
}
