#include<iostream>
using namespace std;
int main(){
    float a, i, b=1, n;
    cout<<"Enter Number : ";
    cin>>n;
    for(i=0.5;i<=n;i++){
        cout<<" ";
        cout<<i++,b++;
        b+=3;
    }
}