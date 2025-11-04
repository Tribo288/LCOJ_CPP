#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N; cin >> N;
    vector<int> vct(N);
    for (int i = 0 ; i < N ; i++) cin >> vct[i];
    // 2 4 5 2 6 1
    // 0 1 2 3 4 5
    long long s = 0;
    for (int i =1; i < N ; i+=2){
        s += vct[i];
    }
    cout << s;
}