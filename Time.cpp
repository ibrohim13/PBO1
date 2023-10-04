// Time.cpp
#include <iostream>

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int hours, int minutes) {
        this->hours = hours;
        this->minutes = minutes;
    }

    void displayTime() {
        std::cout << hours << ":" << minutes << std::endl;
    }
};