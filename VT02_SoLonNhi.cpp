#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n; //So Phan Tu
    vector<int> a(n);
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int max1 = -1e9; int max2 = -1e9;

    for (int i : a){
        if ( i > max1 ){
            max2=max1;
            max1=i;
        }
        else if (i < max1 && i > max2){
            max2 = i;
        }
    }
    if (max2 == -1e9){
        cout <<"NOT FOUND";
    }
    else{
        cout << max2;
    }
}