#include <iostream>
#include <cmath>
#include <vector>
#include <set>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;

    vector<int> in(m*n);
    for (int i = 0 ; i < m*n ; i++) cin >> in[i];
    
    vector<vector<int>> vct(m,vector<int>(n));
    int k = 0;
    for (int i = 0 ; i < m ; i++){
        for (int j = 0 ; j < n ; j++){
            vct[m][n] = in[k++];
        }
    }
    //tom so chinh phuong
    set<int> outlist;
    for (int i = 0 ; i < m ; i++){
        for (int j = 0 ; j < n ; j++){
            int c = sqrt(vct[i][j]);
            if ( c*c == vct[i][j]){
                outlist.insert(vct[i][j]);
            }
        }
    }
    if (outlist.size() == 0) cout <<"NOT FOUND";
    else{
        for (int i : outlist){
            cout << i << " ";
        }
    }
}