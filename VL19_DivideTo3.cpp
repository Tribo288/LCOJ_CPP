#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b;
    int check = 0;
    cin >> a >> b;
    for (int i = b ; i>=a ; i--){
        if (i % 3 == 0){
            check = 1;
            cout << i << " ";
        }
    }
    if (check == 0){
        cout << "NOT FOUND"; 
    }
}