#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    int n; cin >> n;
    cin.ignore();
    set<string> c;
    for(int i = 0 ; i < n ; i++){
        string s;
        getline(cin,s);
        c.insert(s);
    }
    cout << c.size();
}
