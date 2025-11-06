#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s; cin >> s;
    //aaabbcc
    
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
    cout << compressed;
}
