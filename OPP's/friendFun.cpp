//  Friend Function

#include<iostream>
using namespace std;
class value{
    int a,b;
    friend value find(value t);
    public:
    void set(){
        cout<<"Enter A : ";
        cin>>a;
        cout<<"Enter B : ";
        cin>>b;
    }
};

value find(value t){
    if(t.a>t.b)
        cout<<"Max Value is A : "<<t.a;
    else
        cout<<"Max Value is B : "<<t.b;
}
int main(){
    value v;
    v.set();
    find(v);
}
