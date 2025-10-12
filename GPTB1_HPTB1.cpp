//HPTB1
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    double det = a*e-b*d;
    if (det !=0){
        double x,y;
        cout << fixed << setprecision(2);
        x = (c*e-b*f)/(a*e-b*d);
        y= (c-a*x)/b;
        cout << x << " " << y;
    }
    else{
        if ( (a/d == b/e) && ( b/e != c/f) ){
            cout <<"VONGHIEM";
        }
        else if ( (a/d == b/e) && ( b/e == c/f)){
            cout <<"VOSONGHIEM";
        }
    }
}