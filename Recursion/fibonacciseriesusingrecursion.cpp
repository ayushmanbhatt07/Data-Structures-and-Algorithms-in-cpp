/*
finding the sum of fibonacci series using recursion
Sum=0+1+1+2+3+5+...
*/
#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    return(fib(n-1)+fib(n-2));
}
int main(){
    int n;
    cout << "enter the value of n: ";
    cin>> n;
    cout << endl;
    int sum=fib(n);
    cout << sum;
    return 0;
}