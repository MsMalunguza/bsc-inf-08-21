
#include "Shapes_Triangle.h"

namespace shapes {
Triangle ::Triangle() : base(1), height(1) {}

Triangle::Triangle(double base, double height) : base(base), height(height) {}

double Triangle::getBase() const {
    return base;
}

double Triangle::getHeight() const {
    return height;
}

void Triangle::setBase(double base) {
    this->base = base;
}

void Triangle::setHeight(double height) {
    this->height = height;
}
}