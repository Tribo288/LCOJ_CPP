#include <iostream>
#include <vector>
#include <cmath>
#include <set>
using namespace std;
bool prime(int n){
    if (n < 2){
        return false;
    }
    else{
        for (int i = 2 ; i <= sqrt(n) ; i++ ){
            if ( n % i == 0 )return false;
        }
    }
    return true;
}

int main(){
    //nhap n
    int n; cin >> n;
    // nhap mang
    vector<int> a(n);
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    // tao mang dau ra de loai trung lap 
    set<int> o;
    //xu li
    for (int i : a){
        if (prime(i)){
            o.insert(i);
        }
    }
    //in 
    for (int i : o){
        cout << i << " ";
    }
}