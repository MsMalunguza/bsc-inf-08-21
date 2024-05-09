#include "Shapes_Circle.h"

namespace shapes {
Circle ::Circle() : radius(1) {}

Circle::Circle(double radius) : radius(radius) {}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double radius) {
    this->radius = radius;
}
}