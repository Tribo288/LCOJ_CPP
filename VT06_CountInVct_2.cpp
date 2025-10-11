#include <iostream>
#include <vector>
using namespace std;
int main(){
    bool founded = false;

    vector<int> a(11);
    for (int i = 0; i < 11; i++){
        cin >> a[i];
    }

    vector<int> o;
    for (int i =0; i < 10; i++){
        if (a[10] == a[i]){
            o.push_back(i);
            founded = true ;
        }
    }
    if (founded == false){
        cout << -1;
    } 
    else{
        for (int i : o ){
            cout << i+1 << " ";
        }
    }
}