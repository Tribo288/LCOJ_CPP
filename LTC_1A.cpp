#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int T; cin >> T;
    //aaabbcc
    vector<string> out(T);
    for (int i = 0 ; i < T ; i++){
        string s; cin >> s;
        string compressed = "";
        int cnt = 1;
        //
        for (int i = 1 ; i <= s.size(); i++ ){
            if (s[i] == s[i-1]){
                cnt++;
            }
            else{
                compressed += s[i-1];
                compressed += to_string(cnt);
                cnt =1;
            } 
        }
        out[i] = compressed;
    }
    for (string i : out){
        cout << i << endl;
    }
}