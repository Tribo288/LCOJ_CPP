#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a,b;
    char c;
    cout << fixed << setprecision(2);
    cin >> a >> c >> b;
    if (c == '+'){
        cout << a+b;
    }
    else if (c == '-'){
        cout << a-b;
    }
    else if (c == '*'){
        cout << a*b;
    }
    else if (c == '/'){
        if (b == 0){
            cout << "Math Error";
        }
        else{
            cout << a/b;
            }
    }
}

