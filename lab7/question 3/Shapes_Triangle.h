
#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace shapes {
class Triangle {
private:
    double base;
    double height;

public:
    Triangle();
    Triangle(double base, double height);
    double getBase() const;
    double getHeight() const;
    void setBase(double base);
    void setHeight(double height);
};
} 

#endif // TRIANGLE_H