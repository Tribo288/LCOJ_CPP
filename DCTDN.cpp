#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N; cin >> N;
    vector<int> a(N);
    for (int i = 0 ; i < N ; i++) cin >> a[i];
    vector<int> L(N,1);
    //
    for (int i = 0 ; i < N ; i++){
        for (int j = 0 ; j < i ; j++){
            if (a[i]> a[j]){
                L[i] = max(L[i],L[j]+1);
            }
        }
    }
    int max = L[0];
    for (int i : L){
        if (i > max){
            max = i;
        }
    }
    cout << max;
}
