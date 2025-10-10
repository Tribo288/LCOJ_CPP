#include <iostream>
#include <cmath>
#include <numeric>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n==0){
        cout << "INF";
    }
    n=abs(n);
    for (int i = n ; i >= 1 ; i--){
        if (n%i == 0){
            cout << i;
            if (i != 1){
                cout << " ";
            }
        }
    }
}