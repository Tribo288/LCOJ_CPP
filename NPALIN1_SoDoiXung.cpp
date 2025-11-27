#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    vector<int> outlist;
    while (true) {
        string n;
        getline(cin,n);
        if (n == ""){
            break;
        }
        int c = stoi(n);
        int t = (c-1)/2;
        outlist.push_back(9*pow(10,t));
    }
    //
    for (int i : outlist){
        cout << i << endl;
    }
}
