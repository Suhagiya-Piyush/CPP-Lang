#include<iostream>
using namespace std;
int main(){
    int i=1,j,n,z=0;
    char a;
    while(i<=5){j=1;n=8-z;
        while(j<=n){
            cout<<" ";
            j++;
        }j=1;a=65;
        while(j<=i){
            cout<<" "<<a;
            j++;a++;
        }i++;z+=2;
        cout<<"\n";
    }//cout<<n;=0
    i=4;
    while(i>=1){j=1;n=n+2;
        while(j<=n){
            cout<<" ";
            j++;
        }j=1;a=65;
         while(j<=i){
            cout<<" "<<a;
            j++;a++;
        }i--;
        cout<<"\n";
    }
}