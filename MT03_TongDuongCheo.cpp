#include <iostream>
#include <vector>
using namespace std;
int main(){
    //nhap n
    int n; cin >>n;
    vector<int> in(n*n);
    //nhap phan tu
    for (int i = 0 ; i < n*n ; i++) cin >> in[i];
    //chuyen ve vct
    int k = 0;
    vector<vector<int>> vct(n,vector<int>(n));
    for (int i = 0 ; i < n ; i++){
        for (int j = 0; j < n ; j++){
            vct[i][j] = in[k];
            k++;
        }
    }
    // tinh tong duong cheo
    int s = 0;
    for (int i = 0 ; i < n ; i++){
        s += vct[i][i];
    }
    //in kq
    cout << s;
}

