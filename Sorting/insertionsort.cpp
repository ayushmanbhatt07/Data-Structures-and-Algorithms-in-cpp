#include<bits/stdc++.h>
using namespace std;
void insertionsort(int a[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && (a[j-1]>a[j])){
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
        }
    }
}
int main(){
    int n;
    cout << "enter the size: ";
    cin >> n;
    int arr[n];
    cout << "enter the array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    insertionsort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}