#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
    int T; cin >> T;
    vector<double> outlist(T);
    for (int i = 0 ; i < T ; i++){
        int n; cin >> n;
        double res = sqrt(n);
        for (int i = n-1 ; i >= 1; i--){
            res = sqrt(i+res);
        }
        outlist[i] = res;
    }
    for (double i : outlist){
        cout << fixed << setprecision(5) << i << endl;
    }
}

