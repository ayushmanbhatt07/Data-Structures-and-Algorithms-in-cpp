/*
1)print 1 to N by recursion with backtracking
2)print N to 1 by recursion with backtracking
*/
#include<bits/stdc++.h>
using namespace std;
void print1toN(int i,int n){
    if(i<1){
        return;
    }
    print1toN(i-1,n);
    cout << i << " ";
}
void printNto1(int i,int n){
    if(i>n){
        return;
    }
    printNto1(i+1,n);
    cout << i << " ";
}
int main(){
    // print1toN(5,5);
    printNto1(1,5);
    return 0;
}