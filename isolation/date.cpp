#include "date.h"

bool date:: setDay(int d){
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        if (d > 0 && d < 32){
        day = d;
        return true;
    }
    else
        return false;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11){
        if (d > 0 && d < 31){
        day = d;
        return true;
    }
    else
        return false;

    }
    else if (month == 2){
        if (d > 0 && d < 29){
        day = d;
        return true;
    }
    else
        return false;

    }
    else if (month > 12)
        return false;

}

bool date:: setMonth(int m){
    if (m > 0 && m < 13){
        month = m;
        return true;
    }
    else
        return false;

}

bool date:: setYear(int y){
    if (y > 2020 && y < 2023){
        year = y;
        return true;
    }
    else
        return false;

}
