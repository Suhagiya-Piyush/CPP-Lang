#include<iostream>
using namespace std;
class volum{
    public:
    volum(int a, int b, int c){
        cout<<"Rectangular or Cuboid Volume : "<<a*b*c<<endl;
    }
    volum(int a, double b, int c){
        cout<<"Square or Rectangular Pyramid Volume : "<<(4/3)*3.14*a*b*c<<endl;
    }
    volum(int a, int b, double c){
        cout<<"Ellipsoid Volume : "<<(4/3)*3.14*a*b*c<<endl;
    }
    volum(int a){
        cout<<"Cube Volume : "<<a*a*a<<endl;
    }
    volum(double a){
        cout<<"Sphere Volume : "<<(4/3)*3.14*(a*a*a)<<endl;
    }
    volum(int a, int b){
        cout<<"Cylinder Volume : "<<3.14*(a*a)*b<<endl;
    }
    volum(double a, double b){
        cout<<"Pyramid Volume : "<<0.33*a*b<<endl;
    }
    volum(int a,double b){
        cout<<"Right Circular Clon Volume : "<<0.33*3.14*(a*a)*b<<endl;
    }
    volum(double a,int b){
        cout<<"Prism Volume : "<<a*b<<endl;
    }
};
int main(){
    volum a(4,3,5),b(5,3.4,5),c(3,6,5.4),d(3),e(3.5),f(3,4),g(3.4,5.6),h(3,4.5),i(5.6,5);
}