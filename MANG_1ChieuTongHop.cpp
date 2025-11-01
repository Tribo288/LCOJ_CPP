#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> vct(n);
    for (int i = 0 ; i < n ; i++){
        cin >> vct[i];
    }
    //tong cac so
    int s = 0;
    int so_chan = 0;
    for (int i : vct){
        s += i;
        if (i % 2 == 0){
            so_chan ++;
        }
    }
    //tim max
    int max_ind = 0;
    for (int i : vct){
        if (i > 0){
            max_ind = i;
        }
    }
    cout << s << endl << so_chan << endl << max_ind;
}