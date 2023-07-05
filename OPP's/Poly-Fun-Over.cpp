#include<iostream>
using namespace std;
class Test{
    public:
    int work(int a){
        return a*a;
    }
    int work(int a, int b){
        return b%a;
    }
    double work(double a, double b){
        return b-a;
    }
    double work(double a){
        return a+a;
    }
};
int main(){
    Test t;
    cout<<"Square is : "<<t.work(12)<<endl;
    cout<<"Addition is : "<<t.work(4.8)<<endl;
    cout<<"Sub is : "<<t.work(4.8,2.3)<<endl;
}