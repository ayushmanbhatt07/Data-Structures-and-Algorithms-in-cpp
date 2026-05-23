/*
checking if string is palindrome or not using recursion*/
#include<bits/stdc++.h>
using namespace std;
void swap(string &str,int l,int r){
    char c=str[l];
    str[l]=str[r];
    str[r]=c;
}
string reversal(string &str, int l,int r){
    if(l>=r)
    {
        return str;
    }
    

        swap(str,l,r);
        return reversal(str,l+1,r-1);

    
}
bool isPalindrome(string s){
    string original=s;
    int n=s.size();
    string str=reversal(s,0,n-1);
    if(str==original){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string s;
    cout << "enter the string: ";
    cin >> s;
    cout << endl;
    bool t=isPalindrome(s);

    cout << t;
    // int n=s.size();
    // string str=reversal(s,0,n-1);
    // cout << str; 
    return 0;
}
