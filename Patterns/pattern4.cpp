/*
#
##
###
####
#####
####
###
##
#
*/
#include<iostream>
using namespace std;
void print(int n){
    for(int i=1;i<=(2*n-1);i++){
        //hash
        int hash=i;
        if(i>n){
            hash=2*n-i;
        }
        for(int j=1;j<=hash;j++){
            cout << "#";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print(n);
    return 0;
}