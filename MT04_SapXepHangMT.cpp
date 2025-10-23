#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m,n,i;
    cin >> m >> n >> i;
    //nhap 
    vector<int> in(m*n);
    for (int i = 0 ; i < m*n ; i++) cin >> in[i];
    //chuyen ve vct
    int k = 0;
    vector<vector<int>> vct(m,vector<int>(n));
    for (int x = 0 ; x < m ; x++){
        for (int y = 0 ; y < n ; y++){
            vct[x][y] = in[k];
            k++;
        }
    }
    //sap xep hang thu i 
    for (int x = 0 ; x < n ; x++){
        int min_ind = x;
        for (int y = x+1 ; y < n ; y++){
            if (vct[i-1][y] < vct[i-1][min_ind]){
                min_ind = y;
            }
        }
        swap(vct[i-1][x],vct[i-1][min_ind]);
    }
    //in kq
    for (int i = 0 ; i < m ; i++){
        for (int j = 0 ; j < n ; j++){
            cout << vct[i][j] << " ";
        }
        cout << endl;
    }
}
