#include<iostream>
using namespace std;
int main(){
    int i=1,j,n;
    while(i<=5){j=1;n=25;
        while(j<=n){
            cout<<" ";
            j++;
        }j=1;
        while(j<=i){
            cout<<"  "<<"*";
            j++;
        }i++;
        cout<<"\n";
    }
}