/*
write a program to find out the occurrence of characters in a string using hashing
*/
#include<iostream>
using namespace std;
int main(){
    string s;
    cout << "enter the string";
    cin >> s;
    // precomputation
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int q;
    cout << "enter the number of queries";
    cin >> q;
    while(q--){
        //fetch
        char ch;
        cout << "enter the character";
        cin >> ch;
        cout << "the frequency of that character is " << hash[ch-'a'] << endl;
    }
    return 0;
}