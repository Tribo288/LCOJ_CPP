#include <iostream>
using namespace std;
int n, arr[100];
bool used[100];
/* n la so phan tu duoc hoan vi
vi du: hoan vi cua 1, 2, 3 thi n = 3 
co cac hoan vi: 1 2 3, 1 3 2, 2 1 3, 2 3 1, 3 1 2, 3 2 1;
*/
void inkq(){
    for (int i = 1; i <= n; i++){
        cout << arr[i];
    }
    cout << endl;
}

void Try(int i){
    for (int j = 0; j < 2; j++){ // 0 hoac 1
        if(!used[j]){
            arr[i] = j; // gan 0/1
            used[j] = true;
            if (i == n){
                inkq();
                }
            else{
                Try(i+1);
            }
            used[j] = false;
        }
    }
}

int main(){
    cin >> n;
    Try(1);
    return 0;
}