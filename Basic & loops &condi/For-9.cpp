#include<iostream>
using namespace std;
int main(){
    int i, j, n=11;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            cout<<" "<<n;
            n++;
        }cout<<"\n";
        n+=5;
    }
}