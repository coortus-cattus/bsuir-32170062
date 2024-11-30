#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

//создание класса rectangle
class Rectangle {
private:
    int lower_left_corner_x;
    int lower_left_corner_y;
    int height;
    int width;
    int** coords = nullptr;

public:
    // Конструктор с параметрами
    Rectangle(int x, int y, int w, int h)
            : lower_left_corner_x(x), lower_left_corner_y(y), height(h), width(w) {}

    // Конструктор по умолчанию
    Rectangle() : lower_left_corner_x(0), lower_left_corner_y(0), height(0), width(0) {}

    int** coordinates();
    void moving(int new_coordinate_x, int new_coordinate_y);
    void newSize(int new_width, int new_height);
    Rectangle& operator++();
    Rectangle operator++(int);
    Rectangle& operator--();
    Rectangle operator--(int);
    Rectangle operator+(const Rectangle& other) const;
    Rectangle& operator+=(const Rectangle& other);
    Rectangle operator-(const Rectangle& other) const;
    Rectangle& operator-=(const Rectangle& other);
    void display() const {
        std::cout << "Rectangle at (" << lower_left_corner_x << ", " << lower_left_corner_y
                  << ") with width " << width << " and height " << height << std::endl;
    }
    bool operator==(const Rectangle& other) const;
    bool operator!=(const Rectangle& other) const;

    Rectangle(const Rectangle& other)
            : lower_left_corner_x(other.lower_left_corner_x),
              lower_left_corner_y(other.lower_left_corner_y),
              height(other.height),
              width(other.width) {
        // Копируем массив координат
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

    // Оператор присваивания
    Rectangle& operator=(const Rectangle& other);
    ~Rectangle();

};



#endif //RECTANGLE_H
