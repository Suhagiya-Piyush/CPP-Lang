#include<iostream>
using namespace std;
class Fectorial{
    protected:
    int n;
    public:
    void SetVal(){
        cout<<"Enter Any Number : ";
        cin>>n;
    }
};
class Fect : public Fectorial{
    protected:
    int i=1, fect=1;
};
class To_Fect : public Fect{
    public:
    void GetVal(){
        for(;i<=n;i++){
            fect = fect * i;
            cout<<"Fectorial of "<<i<<" is : "<<fect<<endl;
        }
    }
};
int main(){
    To_Fect t;
    t.SetVal();
    t.GetVal();
}