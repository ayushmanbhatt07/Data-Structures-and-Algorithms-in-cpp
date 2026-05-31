/*
Write a program to find largest element in an array. write optimal approach here
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter the size: ";
    cin >> n;
    int arr[n];
    cout << "enter the array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout << "largest element is :" << max;
    return 0;
}