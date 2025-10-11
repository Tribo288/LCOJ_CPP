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
    for (int i = 1 ; i < n-1 ; i++){
        int min_ind = i;
        for (int j = i + 1 ; j < n-1 ; j++ ){
            //   5 3 2 4 1
            //   0 1 2 3 4 
            if (a[j] < a[min_ind]){
                min_ind = j;    
            }
        }
        swap(a[i], a[min_ind]);
    }
    for (int x : a){
        cout << x << " ";
    }
}