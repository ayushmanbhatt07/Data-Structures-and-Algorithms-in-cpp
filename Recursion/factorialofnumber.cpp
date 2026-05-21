/*
factorial of number n using recursion
*/
#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    int d=factorial(n);
    cout << "the factorial is :" << d;
    return 0;
}