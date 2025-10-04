#include <iostream>
using namespace std;
int leap_year(int year){
    return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}
int main(){
    int year,month;
    cin >> month >> year;
    if (month < 1 || year <0 || month > 12){
        cout << "INVALID";
    }
    else if (month == 2);
        if (leap_year(year)){
            cout << 29;
        }
        else {
            cout << 28;
        }
    }
    else if (month== 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        cout << 31;    
    }
    else{
        cout << 30;
    }
}
