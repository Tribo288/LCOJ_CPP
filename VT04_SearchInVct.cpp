#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, x;
    cin >> n >> x;

    int founded = 0;

    vector<int> a(n);
    for (int i = 0 ; i < n; i++ ){
        cin >> a[i];
    }

    for(int i : a){
        if (i == x){
            cout << "YES";
            founded = 1;
        }
    }
    if (founded == 0){
        cout << "NO";
    }

}