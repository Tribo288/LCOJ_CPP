 #include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0 ; i < n ; i++) cin >> arr[i];
    //sap xep
    sort(arr.begin(), arr.end());
    //
    int min = arr[1]-arr[0];
    for (int i = 0 ; i < n-1; i++){
        if (arr[i+1]-arr[i] < min){
            min = arr[i+1]-arr[i];
        }
    }
    //
    cout << min;
}
