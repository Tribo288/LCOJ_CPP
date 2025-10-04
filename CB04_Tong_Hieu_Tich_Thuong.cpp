#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a,b;
    cin >> a >> b;
    
    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    if (b!=0){
        cout << fixed << setprecision(2) << (double)a/b << endl;
    }
    else{
        cout << "ERROR";
    }
    return 0;
    }
