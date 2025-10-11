#include <iostream>
#include <vector>
using namespace std;
int main(){
    // input
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    //sort
    for (int i = 0 ; i < n ; i++){
        int max_idx = i;
        for (int j = i + 1; j < n ; j++ ){
            if (a[j] > a[max_idx]){
                max_idx = j;
            }
        }
        int temp = a[i];
        a[i] = a[max_idx];
        a[max_idx] = temp;
    }
    for (int i : a){
        cout << i << " ";
    }
}