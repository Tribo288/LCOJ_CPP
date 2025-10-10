#include <iostream>
#include <cmath>
#include <numeric>
using namespace std;
int main(){
    int n;
    int c =0;
    cin >> n;
    for (int i = 1; i <= abs(n); i++){
        if (n%i == 0){
            c += 1;
        }
    }
    cout << c;
}