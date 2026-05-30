#include<bits/stdc++.h>
using namespace std;
void Merge(int arr[],int low,int mid,int high){
    int n=high-low+1;
    int temp[n];
    int left=low;
    int right=mid+1;
    int i=0;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp[i]=arr[left];
            left++;
            i++;
        }
        else{
            temp[i]=arr[right];
            right++;
            i++;
        }
    }
    while(left<=mid){
        temp[i]=arr[left];
        left++;
        i++;
    }
    while(right<=high){
        temp[i]=arr[right];
        right++;
        i++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void MergeSort(int arr[],int low,int high){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;
    MergeSort(arr,low,mid);
    MergeSort(arr,mid+1,high);
    Merge(arr,low,mid,high);
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
    MergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}