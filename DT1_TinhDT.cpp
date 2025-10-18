#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a; cin >> a;
    double pi = acos(-1); 
    cout << fixed << setprecision(3) << pi*pow(a,2)/2; 
}
