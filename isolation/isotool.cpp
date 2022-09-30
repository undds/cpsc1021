#include "date.h"
#include <string> 
int main(){
    bool test, expose;
    char posno;
    int daymonths[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    char dateTest[] = "01/01/2021";
do{
    cout << "Have you tested positive recently? (Y/N)";
    cin >> posno;
} while (posno != 'Y' && posno != 'N');

if (posno == 'Y'){
    int inmonth = 0,
        inday = 0,
        inyear = 0;

    cout << "Date of test? (MM/DD/YYYY)";
    cin >> dateTest;

    if (dateTest[0] == '1')
        inmonth = 10;

    cout << dateTest;
    cout << inmonth;
//ADD DATE TO ISOLATE
}


//----------------------------------------------------


if (posno == 'N'){
    do{ 
    cout << "Have you been exposed to someone who has tested positive? (Y/N)";
    cin >> posno;
    } while (posno != 'Y' && posno != 'N');

    if (posno == 'N'){
        cout << "You do not need to isolate";
    }
    else if (posno == 'Y'){
        do{
            cout << "Date of vaccination? (MM/DD/YYYY)";
            cin >> dateTest;
        } while (dateTest == valid) //add input validation

        if(dateTest not over 2 weeks){
            cout << "Date of exposure + 10 days";

        }
        else if (dateTest over 2 weeks){
            cout << "Date of exposure + 5 days";
        }
    }
}
    return 0;
}