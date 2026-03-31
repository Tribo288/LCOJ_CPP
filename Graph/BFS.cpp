#include<iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> danh_sach_ke(1001);
vector<bool> visited(1001,false);
int n,m;

void inp(){
    cin >> n >> m;
    for (int i = 0; i < m ; i++){
        int x,y ; cin >> x >> y;
        danh_sach_ke[x].push_back(y);
        danh_sach_ke[y].push_back(x);
    }
}
void BFS(int u){
    //tao
    queue<int> q;
    q.push(u);
    visited[u] = true;
    //tinh
    while (!q.empty()){
        int v = q.front();
        q.pop(); 
        cout << v << " ";
        for (int i : danh_sach_ke[u]){
            if (!visited[i]){
                q.push(i);
                visited[i] = true;
            }
        }
    }   
} 

int main(){
    inp();
    BFS(1);
}