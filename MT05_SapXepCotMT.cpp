#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m,n,i;
    cin >> m >> n >> i;
    vector<int> in(m*n);
    for (int i = 0 ; i < m*n ; i++) cin >> in[i];
    //tao mang 2 chieu
    vector<vector<int>> vct(m,vector<int>(n));
    int k = 0;
    for (int x = 0 ; x < m ; x++){
        for (int y = 0 ; y < n ; y++){
            vct[x][y] = in[k++];
        }
    }
    //sap xep
    for (int x = 0 ; x < m ; x++){
        int min_ind = x;
        for (int y = x+1 ; y < m ; y++){
            if (vct[y][i-1] < vct[min_ind][i-1]){
                min_ind = y;
            }
        }
        swap(vct[x][i-1],vct[min_ind][i-1]);    
    }
    //in KQ
    for (int x = 0 ; x < m ; x++){
        for (int y = 0 ; y < n ; y++){
            cout << vct[x][y] << " ";
        }
        cout << endl;
    }
}
