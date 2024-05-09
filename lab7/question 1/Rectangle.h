#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
//automatically private
    double length_;  
    double width_;

public:
    Rectangle(); // default constructer
    ~Rectangle(); // destructer

    // Accessor methods
    void setLength(double length);
    void setWidth(double width);
    double getLength() const; 
    double getWidth() const; 

    // member function to calculate area
    double calculateArea() const; 
};

#endif // RECTANGLE_H