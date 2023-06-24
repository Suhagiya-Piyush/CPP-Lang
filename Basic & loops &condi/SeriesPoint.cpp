#include<iostream>
using namespace std;
int main(){
    float i, a=0.5, n;
    cout<<"Enter Number : ";
    cin>>n;
    cout<<a;
    for(i=0.5;i<=n;i++){
        a+=i;
        cout<<"  "<<a;
    }
}