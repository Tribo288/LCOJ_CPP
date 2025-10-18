#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int T; cin >> T;
    cin.ignore();
    vector<int> outlist(T);
    
    for (int i = 0 ; i < T ; i++){
        int n = 0;
        cin >> n;
        int sum_div = 0;
        //tim tong uoc
        for (int x = 1; x <= sqrt(n) ; x++){
            if (n%x == 0 ){
                sum_div += x;
                if (x != n/x){
                    sum_div += n/x;
                }
            }
        }
        outlist[i] = sum_div;
    }
    for (int i : outlist){
        cout << i << endl;
    }
}
