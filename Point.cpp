// Point.cpp
#include <iostream>

class Point {
private:
    int x;
    int y;

public:
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void displayPoint() {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};