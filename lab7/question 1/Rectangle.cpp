#include "Rectangle.h"

Rectangle::Rectangle() : length_(0.0), width_(0.0) {} 

Rectangle::~Rectangle() {} 

void Rectangle::setLength(double length) {
    length_ = length;
}

void Rectangle::setWidth(double width) {
    width_ = width;
}

double Rectangle::getLength() const {
    return length_;
}

double Rectangle::getWidth() const {
    return width_;
}

double Rectangle::calculateArea() const {
    return length_ * width_;
}