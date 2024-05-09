#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
class Circle {
private:
    double radius;

public:
    Circle();
    Circle(double radius);
    double getRadius() const;
    void setRadius(double radius);
};
} 

#endif 