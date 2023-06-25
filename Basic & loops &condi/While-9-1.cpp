#include<iostream>
using namespace std;
int main(){
    int i=1,j;
    while(i<=5){j=5;
        while(j>=1){
            if(i>=j)
                cout<<"* ";
            else
                cout<<" ";
            j--;
        }i++;
        cout<<"\n";
    }
    i=4;
    while(i>=1){j=4;
        while(j>=1){
            if(i>=j)
                cout<<" *";
            else
                cout<<" ";
            j--;
        }i--;
        cout<<"\n";
    }
}