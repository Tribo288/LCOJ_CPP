#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int M,N; cin >> M >> N;
    int cnt = 0;
    for (int i = M; i <= N; i++){
        string s = to_string(i);
        for (char x : s){
            if (x == '5'){
                cnt ++;
            }
        }
    }
        cout << cnt;
}
