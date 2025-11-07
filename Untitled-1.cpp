#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    long long L,R;
    cin >> L >> R;
    vector<long long> outlist;

    long long start = ceil(sqrt(L));
    long long end = floor(sqrt(R));
    
    int cnt = 0;
    for (long long x = start ; x <= end ; x++) cnt++;

    cout << cnt;
 }