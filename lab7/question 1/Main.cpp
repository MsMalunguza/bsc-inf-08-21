#include "Rectangle.h"
#include <iostream>

int main() {
    Rectangle rectangle;

    std::cout << "Enter length: ";
    double length;
    std::cin >> length;
    rectangle.setLength(length);

    std::cout << "Enter width: ";
    double width;
    std::cin >> width;
    rectangle.setWidth(width);

    std::cout << "Area: " << rectangle.calculateArea() << std::endl;

    return 0;
}