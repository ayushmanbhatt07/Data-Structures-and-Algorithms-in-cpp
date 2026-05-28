/*
to address the number size problem in array or to rediuce theb space complexity we use a map in this case
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter the size of the array of numbers ";
    cin >> n;
    int arr[n];
    cout << "enter the array ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    // precompute using a map
    map <int ,int> mpp;
    for (int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int q;
    cout << "enter the number of queries ";
    cin >> q;
    cout << endl;
    while(q--){
        int number;
        cout << "enter the number";
        cin >> number;
        cout << mpp[number] << endl;
    }
    return 0;
}