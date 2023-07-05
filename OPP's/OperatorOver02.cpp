#include<iostream>
using namespace std;
class Box{
    int l, h, w;
    public:
    void setdata(int a, int b, int c){
        l = a;
        w = b;
        h = c;
    }
    int getdata(){
        return l*w*h;
    }
    Box operator- (Box &n){
        Box t;
        t.l = l - n.l;
        t.w = w - n.w;
        t.h = h - n.h;
        return t;
    }
};
int main(){
    Box a, b, c;
    a.setdata(2,3,4);
    cout<<"Box A Volume is : "<<a.getdata()<<endl;
    b.setdata(1,2,3);
    cout<<"Box B Volume is : "<<b.getdata()<<endl;
    c = a - b;
    cout<<"Box C Volume is : "<<c.getdata()<<endl;
}