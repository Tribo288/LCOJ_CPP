#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a,b;
    cin >> a >> b;
    cout << fixed << setprecision(2);
    if ((a==0) && (b==0)){
        cout << "WOW" << endl;
    }
    else if ((a==0) && (b!=0)){
        cout << "NO" << endl;
    }
    else{
        cout << -b/a;
    }
    return 0;
}

