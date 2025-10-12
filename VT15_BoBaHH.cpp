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
    //sap xep collection
    for (int i = 0 ; i < n -1 ; i++){
        int min_ind= i;
        for (int j = i +1 ; j < n ; j++){
            if (a[j] < a[min_ind]){
                min_ind = j;
            }
        }
        swap(a[i],a[min_ind]);
    }
    //Tinh
    if (a[0]*a[1]*a[n-1] > a[n-1]*a[n-2]*a[n-3]){
        cout << a[0]*a[1]*a[n-1];
    }
    else{
        cout << a[n-1]*a[n-2]*a[n-3];
    }
}