#include <iostream>
#include <vector>
using namespace std;
int main(){
     //So phan tu
    vector<int> arr(3);
    for (int i=0; i<3; i++){
        cin >> arr[i];
    }
    int s=0;
    for (int x:arr){
        s+=x;
    }
    cout << s;
    
    return 0;
}