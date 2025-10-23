#include <iostream>
#include <vector>
using namespace std;
int main(){
    //
    int m,n;
    cin >> m >> n;
    //
    vector<int> in(m*n);
    for (int i = 0 ; i < m*n ; i++) cin >> in[i];
    // chuyen thanh vct
    vector<vector<int>> vct(m,vector<int>(n));
    int k = 0;
    
    for (int i = 0 ; i < m ; i++){
        for (int j = 0 ; j < n ; j++){
            vct[i][j] = in[k];
            k++;
        }
    }
    // tinh tong cac hang co chi so le;
    int s = 0;
    for (int i = 1 ; i < m ; i+=2){
        for (int j = 0 ; j < n; j++){
            s += vct[i][j];
        }
    }
    //in kq
    cout << s;
}

