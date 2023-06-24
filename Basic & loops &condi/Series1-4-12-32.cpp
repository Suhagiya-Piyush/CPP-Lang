#include<iostream>
using namespace std;
int main(){
    int i=1, n, x, z;
    cout<<"Enter Number : ";
    cin>>n;
    for(x=1;x<=n;x*=2){
        z = i * x;
        cout<<z;
        cout<<" ";
        i++;
    }
}