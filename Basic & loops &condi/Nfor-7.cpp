#include<iostream>
using namespace std;
int main(){
    int i, j;
    char n=65;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if(i%2!=0)
                cout<<" "<<n;
            else
                cout<<" "<<char(n+32);
            n++;
        }cout<<"\n";
    }
}