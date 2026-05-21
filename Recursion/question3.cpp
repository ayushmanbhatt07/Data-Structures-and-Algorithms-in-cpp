/*
sum of N numbers using recursion
*/
#include<bits/stdc++.h>
using namespace std;
int summation(int n){
    
    if(n==0){
        return 0;
    }
    return (n+summation(n-1));
}
void parametrisedwayofsum(int i,int sum){
    if(i<1){
        cout << "the sum is " << sum;
        return;
    }
    parametrisedwayofsum(i-1,sum+i);
}
int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    // parametrisedwayofsum(n,0);
    int d= summation(n);
    cout << "the sum is: " << d;
    return 0;
}