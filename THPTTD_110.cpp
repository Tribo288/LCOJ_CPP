#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int T; cin >>T;
    vector<int> out(T);
    for (int i = 0; i < T ; i++){
        int X,Y,N; cin >> X >> Y >> N;
        for (int j = 0 ; j < N; j++){
            if (j % 2 == 0){
                X =X*2;
            }
            else{
                Y = Y*2;
            }
        }
        int kq = max(X,Y)/min(X,Y)- max(X,Y)%min(X,Y);
        out[i] = kq;
    }
    for (int i : out){
        cout << i << endl;
    }
}