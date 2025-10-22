#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int n; cin >> n;
    
    vector<bool> is_prime(n+1);// tao mang 
    is_prime[0] = is_prime[1] = false; // 0 va 1 ko phai snt 
    for (int i = 2 ; i <= n+1 ; i++){
        is_prime[i] = true; // gia su toan bo la true 
    }
    //sang ng to
    for (int i = 2; i <= sqrt(n); i++){ // chay tu 2 den can n 
        if (is_prime[i]){
            //danh dau cac boi cua i ko phai la snt 
            for (int j = i*i ; j <= n ; j += i){
                is_prime[j] = false;  
            }
        }
    }
    // in kq
    for (int i = 2; i <= n ; i++){
        if (is_prime[i]){
            cout << i << " ";
        } 
    } 
} 
