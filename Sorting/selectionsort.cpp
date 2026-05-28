#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int min,int i){
    int temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
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
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr,min,i);
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}