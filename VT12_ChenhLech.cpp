#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0 ; i < n ; i++ ){
        cin >> a[i];
    }
    //tim max min
    int max = a[n-1], min = a[0];
    for (int i : a){
        if (i > max){
            max = i;
        }
        else if (i < min){
            min = i;
        }
    }
    cout << max - min; 
}