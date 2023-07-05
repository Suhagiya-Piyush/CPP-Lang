#include<iostream>
using namespace std;
class Result{
    int rno, maths, sci, eng, total;
    char name[20];
    float per;
    public:
    Result(){  // Result is Constructor - By Dafult Called when Create Object
        cout<<"Enter Roll No : ";
        cin>>rno;
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Maths Marks : ";
        cin>>maths;
        cout<<"Enter Science Marks : ";
        cin>>sci;
        cout<<"Enter English Marks : ";
        cin>>eng;

        //calcul(); By Dafult Called calcul Mathod(Function)
    }
    void calcul(){
        total = maths + sci + eng;
        per = (float)total/3;

        //disp(); By Dafult Called disp Mathod(Function)
    }
    void disp(){
        cout<<"\n";
        cout<<"Roll No Is : "<<rno<<endl;
        cout<<"Name Is : "<<name<<endl;
        cout<<"Maths Mark Is : "<<maths<<endl;
        cout<<"Science Mark Is : "<<sci<<endl;
        cout<<"English Mark Is : "<<eng<<endl;
        cout<<"Total Mark Is : "<<total<<endl;
        cout<<"Your Percentage Is : "<<per<<endl;
    }
};
int main(){
    Result r;
    r.calcul(); //called calcul Method(Function) by Object
    r.disp(); //called disp Method(Function) by Object
}