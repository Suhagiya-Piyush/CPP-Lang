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
class To_Square : public Square{
    protected:
    int i;
    public:
    void GetVal(){
        for(i=1;i<=n;i++){
            cout<<" "<<i<<" : "<<i*i<<endl;
        }
    }
};
int main(){
    To_Square t;
    t.SetVal();
    t.GetVal();
}