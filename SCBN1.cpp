#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> vct(n);
    for (int i = 0; i < n ; i++) cin >> vct[i];
    //
    int cnt = 0;
    for (int i = 0; i < n-1 ; i++){
        if (vct[i] == vct[i+1]) cnt++;
    }
    cout << cnt;
}
