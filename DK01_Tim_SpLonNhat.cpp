#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    if (a!=b){
        cout << max(a,b) << endl;
    }
    else{
        cout << b << endl;
    }
}
