#include <iostream>
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    long long res = a*b;
    if (res > 0) cout << 1;
    else if (res < 0) cout << -1;
    else cout << 0;
}