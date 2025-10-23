#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m,n;
    cin >> m >> n;
    vector<int> in(m*n);
    vector<vector<int>> vct(m,vector<int>(n));
    //1 2 3
    //4 5 6
    //7 8 9
    //Nhap mang
    for (int i = 0 ; i < m*n ; i++){
        cin >> in[i];
    }
    //chuyen mang ve 2 chieu
    int k = 0; 
    for (int i = 0 ; i < m; i++){
        for (int j = 0 ; j < n ; j++){
            vct[i][j] = in[k]; 
            k++; 
        }  
    }
    //in kq
    for (int i = 0 ; i < m; i++){
        for (int j = 0 ; j < n ; j++){
            cout << vct[i][j] << " "; 
        }
        cout << endl;   
    } 
} 
