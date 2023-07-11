#include<iostream>
using namespace std;
class Square{
    protected:
    int n;
    public:
    void SetVal(){
        cout<<"Enter Any Number : ";
        cin>>n;
    }
};
class Square1 : public Square{
    protected:
    int i=1;
};
class To_Square : public Square1{
    public:
    void GetVal(){
        for(;i<=n;i++){
            cout<<" "<<i<<" : "<<i*i<<endl;
        }
    }
};
int main(){
    To_Square t;
    t.SetVal();
    t.GetVal();
}