// Circle.cpp
#include <iostream>
#include <cmath>

class Circle {
private:
    double radius;

public:
    Circle(double radius) {
        this->radius = radius;
    }

    double getRadius() {
        return radius;
    }

    double calculateArea() {
        return M_PI * radius * radius;
    }
};