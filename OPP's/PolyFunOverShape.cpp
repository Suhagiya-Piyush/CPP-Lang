#include<iostream>
using namespace std;
class Area{
    public:
    int shape(int a){
        return a*a;
    }
    double shape(double a){
        return 3.14*(a*a);
    }
    int shape(int a, int b){
        return a*b;
    }
    double shape(double a, double b){
        return 0.5*(a*b);
    }
};
int main(){
    Area a;
    cout<<"Calculate Area of Square : "<<a.shape(6)<<endl;
    cout<<"Calculate Area of Circle : "<<a.shape(5.7)<<endl;
    cout<<"Calculate Area of Rectangle : "<<a.shape(4,8)<<endl;
    cout<<"Calculate Area of Triangle : "<<a.shape(2.4,5.8)<<endl;
}