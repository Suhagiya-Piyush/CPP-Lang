#include<iostream>
using namespace std;
class Area{
    public:
    Area(){
        cout<<"\n\tArea of Shape "<<endl;
    }
    Area(int a){
        cout<<"Calculate Area of Square : "<<a*a<<endl;
    }
    Area(double a){
        cout<<"Calculate Area of Circle : "<<3.14*(a*a)<<endl;
    }
    Area(int a, int b){
        cout<<"Calculate Area of Rectangle : "<<a*b<<endl;
    }
    Area(double a, double b){
        cout<<"Calculate Area of Triangle : "<<0.5*(a*b)<<endl;
    }
};
int main(){
    Area n, w(5), z(4.3,2.9), x(5,7), y(3.5);
}