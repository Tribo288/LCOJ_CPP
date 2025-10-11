#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    //sx giam
    sort(a.begin(), a.end(), greater<int>());
    // in ra
    for (int i : a){
        cout << i << " ";
    }
}