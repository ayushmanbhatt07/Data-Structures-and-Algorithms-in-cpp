#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
            }
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
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}