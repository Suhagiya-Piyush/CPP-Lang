#include<iostream>
using namespace std;
int main(){
    int i=1,j,n,z=0;;
    while(i<=5){j=1;n=25-z;
        while(j<=n){
            cout<<" ";
            j++;
        }j=1;
        while(j<=i){
            cout<<"* ";
            j++;
        }i++;z++;
        cout<<"\n";
    }
}