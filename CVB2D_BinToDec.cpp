#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
int main(){
    int T; cin >> T; cin.ignore();
    vector<int> outlist(T); 
    for (int x = 0 ; x < T ; x++){
        string s; cin >> s;
        vector<char> vct;
        int dec = 0;
        for (char i : s){
            vct.push_back(i); 
        }
        //1 0 1 0
        //0 1 2 3 
        for (int i = 0 ; i < vct.size() ; i++){
            if (vct[i] == '1'){
                dec += pow(2,vct.size()-i-1); 
            } 
        } 
        outlist[x] = dec; 
    }
    for (int i : outlist){
        cout << i << endl; 
    } 
}
