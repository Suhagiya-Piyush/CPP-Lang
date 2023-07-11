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
        cout<<n<<" Square is : "<<n*n<<endl;
    }
};
class Cube : public Base{
    public:
    void GetCube(){
        cout<<n<<" Cube is : "<<n*n*n<<endl;
    }
};
int main(){
    Square S;
    S.SetData();
    S.GetSqr();
    Cube C;
    C.SetData();
    C.GetCube();
}