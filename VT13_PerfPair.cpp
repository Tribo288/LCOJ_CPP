#include <iostream>
#include <vector>
using namespace std;
int main(){
    // Tao mang
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    // tao bo doi
    int num1,num2,max_sum;
    num1 = a[n-1];
    num2 = a[0];
    max_sum = num1 + num2;
    // tim max
    for (int i=0 ; i < n-1; i++){
        if (a[i]+a[i+1] >= max_sum){
            num1 = a[i];
            num2 = a[i+1];
            max_sum = num1 + num2;
        }
    }
    cout << num1 << " " << num2;
}