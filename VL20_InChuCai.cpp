#include <iostream>
using namespace std;
int main(){
    char a,b;
    cin >> a >> b;
    for (char c = a; c <= b; c++){
        cout << (char)toupper(c);
        if (c != b){
            cout <<" ";
        }
    }
}