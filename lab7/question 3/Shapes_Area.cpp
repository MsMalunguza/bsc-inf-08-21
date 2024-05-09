#include <iostream>>
#include <cmath>

class Shape {

public:
    virtual double calculateArea() const = 0;
};
class Shape {
public:
    virtual double calculateArea() const = 0;
};



class Square : public Shape {
private:
    double sideLength;

public:
    Square(double sideLength) : sideLength(sideLength) {}

    double calculateArea() const override {
        return sideLength * sideLength;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double base, double height) : base(base), height(height) {}

    double calculateArea() const override {
        return 0.5 * base * height;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}

    double calculateArea() const override {
        return M_PI * radius * radius;
    }
}
 double calculateArea(const Shape& shape) {
    return shape.calculateArea();
}
using namespace std;
int main() {
    Square square(5);
    Triangle triangle(3, 4);
    Circle circle(2);

    std :: cout << "Area of square: " << calculateArea(square) ;
    std :: cout << "Area of triangle: " << calculateArea(triangle) ;
    std:: cout << "Area of circle: " << calculateArea(circle) ;

    return 0;
}
