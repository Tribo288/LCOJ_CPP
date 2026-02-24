#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool check_na(char c){
	return (c == 'A' || c== 'E'|| c== 'O' || c== 'U' || c== 'I');
	
}
int main(){
	string s; cout << "Nhap xau: ";getline(cin,s);
	string sr = "";
	for (int i = 0; i < s.size(); i += 2){
		sr.push_back(s[i]);
		if (check_na(s[i]) && check_na(s[i+1])) sr.push_back('-');
		sr.push_back(s[i+1]);
	}
	
	for (int i = 0; i < sr.size(); i++){
		cout << sr[i];
	}
} 
