#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {
class Square {
private:
    double sideLength;

public:
    Square();
    Square(double sideLength);
    double getSideLength() const;
    void setSideLength(double sideLength);
};
} 

#endif // SQUARE_H