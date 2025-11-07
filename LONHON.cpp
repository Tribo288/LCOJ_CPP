#include <iostream>
using namespace std;
int main(){
    int A,B ; cin >> A >> B;
    int cnt = 0;
    while (A <= B){
        A = 3*A;
        B = 2*B;
        cnt ++;
    }
    cout << cnt;
}