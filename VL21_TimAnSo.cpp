#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long N;
    cin >> N;
    long long delta = 1+8*N;
    cout << (int)((-1+sqrt(delta))/2);
    return 0;
}