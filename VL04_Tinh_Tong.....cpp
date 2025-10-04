#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int n;
    double s = 0;
    cin >> n;
    for (int i=2 ; i<(n+1) ; i++){
        s+= pow(i,-1);
    }
    cout << fixed << setprecision(4) << s;
    return 0;
}
