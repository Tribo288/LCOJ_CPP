#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> chieu_cao(n);
    for (int i = 0 ; i < n ; i++) cin >> chieu_cao[i]; 
    //sap xep
    set<int> sorted_height;
    for (int i : chieu_cao){
        sorted_height.insert(i);
    }
    //
    for (int i : chieu_cao
    
}