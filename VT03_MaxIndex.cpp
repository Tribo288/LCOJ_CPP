#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    
    int m = -1e9;
    int m_ind = -1e9;

    for (int i = 0 ; i < n; i++ ){
        cin >> a[i];
    }
    
    for (int i = 0 ; i < n; i++ ){
        if ( a[i] >= m){
            m = a[i];
            m_ind = i;
        }
    }
    cout << m_ind;
}