#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int n,m;
vector<vector<int>> danh_sach_ke(1001);
vector<bool> visited(1001,false);
void inp(){
    cin >> n >> m;
    for (int i = 0; i < m ; i++){
        int x,y ; cin >> x >> y;
        danh_sach_ke[x].push_back(y);
        danh_sach_ke[y].push_back(x);
    }
}
void dfs(int u ){
    cout << u << " "; //in dinh u
    visited[u] = true; // danh dau dinh u da duoc thanm
    for (int v : danh_sach_ke[u]){ //duyet cac dinh ke voi dinh u
        if(!visited[v]){// neu dinh v ke voi dinh u chua duoc tham
            dfs(v);  // tim kiem voi dinh v
        }
    }
}
int main(){
    inp();
    dfs(1);
}