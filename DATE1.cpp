#include <iostream>
#include <vector>
using namespace std;
bool leap(int y){
    if ((y%400==0)||((y%100!=0)&&(y%4==0))){
        return true;
    }
    return false;
}
int main(){
    long long n, y ; cin >> n >> y;
    int days[12] = {31, 28,31, 30,31,30,31,31,30,31,30,31};
    if(leap(y)){
        days[1] = 29;
    }
    int m = 1;
    while (n > days[m-1]){
        n -= days[m-1];
        m++;
    }
    cout << n << " " << m;
}
