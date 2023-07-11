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
class Cal : public Base{
    protected:
    int x = 1;
};
class Output : public Cal{
    public:
    void GetN(){
        for(;x<=10;x++){
            cout<<n<<" * "<<x<<" = "<<n*x<<endl;
        }
    }
};
int main(){
    Output tab;
    tab.SetN();
    tab.GetN();
}