#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double a,b,c;
    cin >> a >> b >> c;
    double P = (a+b+c)/2;
    
    if ((a+b) <= c){
        cout << "NO";
    }
    else{
        cout << P*2 << " ";
        cout << fixed << setprecision(2) << sqrt(P*(P-a)*(P-b)*(P-c));
    }
}
