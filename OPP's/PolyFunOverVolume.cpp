#include<iostream>
using namespace std;
class Volume{
    public:
    int vol(int a, int b, int c){
        return a*b*c;
    }
    double vol(int a, double b, int c){
        return (4/3)*3.14*a*b*c;
    }
    double vol(int a, int b, double c){
        return (4/3)*3.14*a*b*c;
    }
    int vol(int a){
        return a*a*a;
    }
    double vol(double a){
        return (4/3)*3.14*(a*a*a);
    }
};
int main(){
    Volume v;
    cout<<"Rectangular or Cuboid Volume : "<<v.vol(4,3,5)<<endl;
    cout<<"Square or Rectangular Pyramid Volume : "<<v.vol(4,3.8,5)<<endl;
    cout<<"Ellipsoid Volume : "<<v.vol(4,3,5.9)<<endl;
    cout<<"Cube Volume : "<<v.vol(3)<<endl;
    cout<<"Sphere Volume : "<<v.vol(5.7)<<endl;
}