#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    vector<string> words;
    stringstream ss(s); 
    string word;
    
    while (ss >> word){
        words.push_back(word); 
    } 
    
    cout << words.size();
    
} 

