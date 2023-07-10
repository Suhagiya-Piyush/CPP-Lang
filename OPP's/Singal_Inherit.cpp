#include<iostream>
using namespace std;
class Base{
    protected:
    int n;
    public:
    void SetN(){
        cout<<"Enter N : ";
        cin>>n;
    }
};
class Derived : public Base{
    public:
    void GetN(){
        cout<<"Value Of N : "<<n<<endl;
    }
};
int main(){
    Derived d;
    d.SetN();
    d.GetN();
}