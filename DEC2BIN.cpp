#include <iostream>
#include <vector>
using namespace std;
string DEC(long long n){
    string s="";
    if (n == 0){
        return "0";
    }
    while (n > 0){
        if (n%2 == 0){
            n = n/2;
            s = "0" + s;
        }
        else{
            n = n/2;
            s = "1" + s;
        }
    }
    return s;
}
int main(){
    int T;
    cin >> T;
    vector<long long> kq(T);
    
    for (int i = 0 ; i < T; i++){    
        cin >> kq[i];
    }
    
    for (int i = 0 ; i < T ; i++){
        cout << DEC(kq[i]) << endl;
    }
}
