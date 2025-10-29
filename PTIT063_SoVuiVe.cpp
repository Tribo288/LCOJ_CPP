#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int l,r; cin >> l >> r;
    int result = 0;
    for (int i = l+1 ; i < r ; i++){
        int count = 0 ;
        for (int x = 1 ; x <= sqrt(i) ; x++){
            if (i%x == 0){
                count += 1;
                if (i/x != x){
                    count += 1; 
                }
            }
        if (count %2 != 0){
            result += 1;
            }
        }
    }
    cout << result;
}
