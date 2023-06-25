#include<iostream>
using namespace std;
int main(){
    int i=5,j,n=25;
    while(i>=1){j=1;
        while(j<=n){
            cout<<" ";
            j++;
        }j=1;
        while(j<=i){
            cout<<" "<<"*";
            j++;
        }i--;
        cout<<"\n";
    }
}