#include<iostream>
using namespace std;
int main(){
    int i=1,j,n=4;
    while(i<=4){j=1;
        while(j<=i){
            cout<<" "<<n;
            n--;
            j++;
        }i++;
        n=4;
        cout<<"\n";
    }
    i=3;
    while(i>=1){j=1;
        while(j<=i){
            cout<<" "<<n;
            n--;
            j++;
        }i--;
        n=4;
        cout<<"\n";
    }
}