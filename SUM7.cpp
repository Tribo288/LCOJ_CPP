#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int T; cin >> T;
    vector<double> outlist(T);
    
    //prefix
        vector<double> dp(1e6+1);
        dp[1] = 1;
        for (int i = 2; i <=1e6+1 ; i++){
            dp[i] = 0.0;
        }
        for (int i = 2 ;i <= 1e6 ; i++){
            dp[i] = sqrt(i+dp[i-1]);
        }
    for (int i = 0 ; i < T ; i++){
        int n; cin >> n;
        outlist[i] = dp[n];
    }
    //in kq
    for (double i : outlist){
        cout << fixed << setprecision(5) i << endl;
        
    }
    }
