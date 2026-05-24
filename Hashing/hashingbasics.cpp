#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter the value of n" ;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    int hash[12]={0}; // we defining that the max number of unique numbers will be 12
    for (int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int q; // number of numbers for which we need an occurence
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        // fetching the number from the hash
        cout << "the occurrence of " << number << "is " << hash[number] << endl;

    }
    return 0;
}