#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, x; // so phan tu , phan tu can tim
    cin >> n >> x;

    int count = 0; // Dem so lan xuat hien

    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i : a){
        if (i == x){
            count += 1;
        }
    }
    cout << count;
}