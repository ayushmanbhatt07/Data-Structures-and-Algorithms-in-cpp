/*
#
##
###
####
*/
#include<iostream>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "# ";
        }
        cout << "\n";
    }
}
int main(){
    int t; // for test cases
    int n;
    cout << "enter the test case";
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        print(n);
    }
    return 0;
}