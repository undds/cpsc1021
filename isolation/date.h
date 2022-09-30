#ifndef DATE_H
#define CIRCLE_H

#include <iostream>
using namespace std;

class Date {
    private:
        int day {1},
            month {1},
            year{1};

    public:
        Date() = default;
        Date(int, int, int);

        bool setDay(int d);
        bool setMonth(int m);
        bool setYear(int y);

        int getDay();
        int getMonth();
        int getYear();

        string showDate();
};

#endif