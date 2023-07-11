#include<iostream>
using namespace std;
class Base{
    protected:
    int n;
    public:
    void SetData(){
        cout<<"Enter N : ";
        cin>>n;
    }
};
class Square : public Base{
    public:
    void GetSqr(){
        cout<<n<<"Square is : "<<n*n<<endl
    }
};