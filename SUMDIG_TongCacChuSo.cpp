#include <iostream>
#include <vector>
using namespace std;
int main(){
    int T; cin >> T;
    vector<int> outlist(T);
    for (int i = 0 ; i < T ; i++){
        string n;
        cin >> n;
        long long sum = 0;
        
        for (char c : n){
            sum += c-'0'; //chuyen char thanh int
        }
        outlist[i] = sum;
    }
    
    for (int i : outlist){
        cout << i << endl;
    }
}
