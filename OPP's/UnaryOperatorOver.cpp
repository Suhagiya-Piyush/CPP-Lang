#include<iostream>
using namespace std;
class Box{
    int l, w, h;
    public:
    void setdata(int a, int b, int c){
        l = a;
        w = b;
        h = c; 
    }
    int getdata(){
        return l*w*h;
    }
    Box operator++(int){
        Box t;
        t.l = l++;
        t.w = w++;
        t.h = h++;
        return t;
    }
};
int main(){
    Box a,b;
    a.setdata(4,5,6);
    cout<<"Volume of Box A is : "<<a.getdata()<<endl;
    a++;
    b = a;      // 5   6   7
    cout<<"Volume of Box B is : "<<b.getdata()<<endl;
}