/*
reverse an array using recursion
*/
#include<bits/stdc++.h>
using namespace std;
void swap(int a[],int l,int r){
    int c=a[l];
    a[l]=a[r];
    a[r]=c;
}
void reversal(int a[], int l,int r){
    if(l>=r)
    {
        return;
    }
    swap(a,l,r);
    reversal(a,l+1,r-1);
}

int main(){
    int a[]={1,5,6,2,3};
    int l=0;
    int r=4;
    reversal(a,l,r);
    for(int i=0;i<5;i++){
        cout << a[i] << " ";
    }
    return 0;
}