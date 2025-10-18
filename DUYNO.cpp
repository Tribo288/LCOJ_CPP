#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<string> out_lst;
    while (true){
        string n; cin >> n;
        vector<char> s;
        if ( n == ""){
            break;
        }
        for (char i : n){
            s.push_back(i);
        }
        if (s[0] == s[s.size()-1]){
            out_lst.push_back("YES");
        }
        else{
            out_lst.push_back("NO");
        }
    }
    for (string i : out_lst){
        cout << i << endl;
    }
}
