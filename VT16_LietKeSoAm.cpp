#include<iostream>
#include<vector>
using namespace std;
int main(){
    //Nhap mang
    vector<int> a;
    int x;
    while (true){
        cin >> x;
        if (x < 0){
            a.push_back(x);
        }
        else if (x == 0){
            break;
        }
    } 
    //danh sach so am
    vector<int> o;
    for (int i : a){
        if (i < 0){
            o.push_back(i);
        }
    }
    //dau ra
    if (o.size() > 0){
        for (int x : a){
            cout << x << " ";
        }
    }
    else{
        cout << "NOT FOUND";
    }
}

