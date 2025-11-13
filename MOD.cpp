#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    string s = to_string(abs(n));
    cout << s[s.size()-3] << s[s.size()-2] << s[s.size()-3]; 
}
