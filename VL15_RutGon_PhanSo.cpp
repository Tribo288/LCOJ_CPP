#include <iostream>
#include <cmath>
#include <numeric>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    if (b == 0){
        cout << "INVALID";
    }
    else if (a%b == 0){
        cout << a/b;
    }
    else{
        if ( b<0 ){
            a=-a;
            b=-b;
        }
        int g=gcd(abs(a),abs(b));
        a /= g;
        b /= g;
        cout << a << " " << b;
    }
}