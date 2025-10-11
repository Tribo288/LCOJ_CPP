#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    //Nhap so pt
    int n; cin >> n;
    //Nhap Mang
    vector<int> a(n);
    for (int i = 0; i < n; i++ ){
        cin >> a[i];
    }
    // Xu Li Yeu cau
    if (a.size() == 3){
        a[1] += abs(a[2]-a[0]);
    }
    else{
        for (int i = 1; i < (n - 1); i++ ){
            // 1 2 3 4 5 6
            // 0 1 2 3 4 5
            if (i % 2 != 0){
                a[i] += abs(a[i+1]-a[i-1]);
            }
        }
    }
    // Xu li truong hop dac biet khi chi so le o cuoi
    if (a.size() % 2 == 0){
            a[n-1] += a[n-2];
        }
    for (int i : a){
        cout << i << " ";

    }
}