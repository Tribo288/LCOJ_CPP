#include <iostream>
#include <cmath>
#include <numeric>
using namespace std;
int gcd(int a, int b){
    while (b!=0){
        int r = a%b;
        a=b;
        b=r;
    }
    return a;
}
int main(){
    int a,b;
    cin >> a >> b;
    cout << gcd(a,b);
}