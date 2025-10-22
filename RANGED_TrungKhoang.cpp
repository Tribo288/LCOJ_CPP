#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    // A B    C D
    // C D    A B
    if ( (((a <= d) && (c <= b))) || ((c <= b)&&(a <= d))){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}