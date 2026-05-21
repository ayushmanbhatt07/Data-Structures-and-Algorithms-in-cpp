/*
1)print name 5 times
2)print linearly from 1 to N
3)print N to 1
*/
#include<bits/stdc++.h>
using namespace std;
void printName(int n){
    if(n==0){
        return;
    }
    else{
        cout << "nawab" << endl;
        n--;
        printName(n);
    }
}
void printLinearly(int n,int i){
    if(i>n){
        return;
    }
    cout << i << " ";
    i++;
    printLinearly(n,i);
}
void printreverseLinearly(int n){
    if(n<1){
        return;
    }
    cout << n << " ";
    n--;
    printreverseLinearly(n);
}

int main(){
    // printName(5);
    // printLinearly(5,1);
    printreverseLinearly(5);
    return 0;
}