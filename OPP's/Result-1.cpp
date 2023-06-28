#include<iostream>
using namespace std;
class student{
    int admno;
    char sname[20];
    float eng, maths, sci, total;
    float ctotal(){
        return eng+maths+sci;
    }
    public:
    void Takedata(){
        cout<<"Enter Admin No : ";
        cin>>admno;
        cout<<"Enter Name : ";
        cin>>sname;
        cout<<"Enter Maths Mark : ";
        cin>>maths;
        cout<<"Enter Science Mark : ";
        cin>>sci;
        cout<<"Enter English Mark : ";
        cin>>eng;
        total = ctotal();
    }
    void Showdata(){
        cout<<"Admin No : "<<admno<<endl;
        cout<<"Name : "<<sname<<endl;
        cout<<"Maths Mark : "<<maths<<endl;
        cout<<"Science Maek : "<<sci<<endl;
        cout<<"English Mark : "<<eng<<endl;
        cout<<"Total Marks : "<<total<<endl;
    }
};
int main(){
    student s;
    s.Takedata();
    s.Showdata();
}