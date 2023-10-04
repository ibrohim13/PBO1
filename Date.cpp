// Date.cpp
#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int day, int month, int year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void displayDate() {
        std::cout << day << "/" << month << "/" << year << std::endl;
    }
};