#include "Shapes_Square.h"

namespace shapes {
Square::Square() : sideLength(1) {}

Square::Square(double sideLength) : sideLength(sideLength) {}

double Square::getSideLength() const {
    return sideLength;
}

void Square::setSideLength(double sideLength) {
    this->sideLength = sideLength;
}
} // namespace shapes