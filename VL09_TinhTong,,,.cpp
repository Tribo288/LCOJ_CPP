#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
long long factorial(int n){
    if (n==1 || n==0){
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}
int main(){
    int x,n;
    double res=0;
    cin >> x >> n;
    for (int i=1 ; i<(n+1) ; i++ ){
        res+=pow(x,i)/factorial(i);
    }
    cout << fixed << setprecision(2) << res;
}
