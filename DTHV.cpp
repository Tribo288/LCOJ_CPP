#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    long long n; cin >> n;
    long double canh = n/sqrt(2);
        cout << fixed << setprecision(1) << pow(canh,2);
}