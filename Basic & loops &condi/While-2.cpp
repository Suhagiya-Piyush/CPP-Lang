#include<iostream>
using namespace std;
int main(){
    int i=1,j;
    char n=65;
    while(i<=4){j=1;
        while(j<=i){
            cout<<"  "<<char(n-j+1);
            j++;
        }i++;n++;
        cout<<"\n";
    }n=65;
    i=3;
    while(i>=1){j=i;
        while(j>=1){
            cout<<"  "<<char(n+j-1);
            j--;
        }i--;
        cout<<"\n";
    }
}