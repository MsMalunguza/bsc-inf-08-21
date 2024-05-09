#include <iostream>
#include <cmath>

class Rectangles {
private:
    double length;
    double width;

public:
    // Overloaded constructor
    Rectangles(double l, double w) : length(l), width(w) {}

    Rectangles() : length(1), width(1) {}

    double getArea() const {
        return length * width;
    }

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    void setLength(double l) {
        length = l;
    }

    void setWidth(double w) {
        width = w;
    }
};

int main() {
    Rectangles rect1;

    // Get user input for length and width
    double l, w;
    std::cout << "Enter length for rect2: ";
    std::cin >> l;
    std::cout << "Enter width for rect2: ";
    std::cin >> w;

    // Create a new rectangle instance using the overloaded constructor
    Rectangles rect2(l, w);

    // Output the area of the rectangles
    std::cout << "Area of rect1: " << rect1.getArea() << std::endl;
    std::cout << "Area of rect2: " << rect2.getArea() << std::endl;

    return 0;
}