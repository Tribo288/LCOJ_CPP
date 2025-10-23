#include <iostream>
using namespace std;
int main(){
    int ax,ay,bx,by,cx,cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    if (ax < bx){
        swap(ax,bx);
        swap(ay,by);
    }
    //A..     ...A
    //..B    B...
    if ((ay>by)){
        if (ax<bx){
            if ((ax<bx)&&(bx<cx)&&(by<cy)&&(cy<ay)) cout <<"YES";
            else cout<<"NO";
        }
        else{
            if ((bx<cx)&&(cx<ax)&&(by<cy)&&(cy<ay)) cout << "YES";
            else cout <<"NO";
        }
    }   
    else{
        if (bx<ax){
            if ((bx<cx)&&(cx<ax)&&(ay<cy)&&(cy<by)) cout <<"YES";
            else cout << "NO";
        }
        else{
            if ((ax<bx)&&(bx<cx)&&(ay<cy)&&(cy<by)) cout <<"YES";
            else cout <<"NO";
        }
    }            
}