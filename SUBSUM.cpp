// X+Y = A;
// X - Y = B;
//=> Y= A-X;
// =>X-A+X = B;
// => X= (B+A)/2
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int X = (a+b)/2;
    int Y = a-X;
    cout << X << " " << Y;
}
