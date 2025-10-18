#include <iostream>
#include <vector>
using namespace std;
int main(){

    int T; cin >> T; //So test
    cin.ignore();
    vector<int> result_list(T); //bien luu tung ket qua
    
    for (int i = 0 ; i < T ; i++){
        //Bien dem
        int cnt = 0;
        string s =""; //bien luu string vua nhap
        vector<char> temp_line;  //bien luu string thanh ve
        //Nhap xau
        getline(cin,s);
        for (char c : s){
            temp_line.push_back(c);
        }
        //xu li ki tu cuoi
        int len = temp_line.size();
        if (temp_line[len-1] == ' '){
            cnt +=1;
        }
        for (int i = 0 ; i < len-1 ; i++){
            if (temp_line[i] ==' ' && temp_line[i+1] != ' '){
                cnt+=1;
            }
        }
        result_list[i] = cnt;
    }
    for (int i : result_list){
        cout << i << endl;
    }
}
