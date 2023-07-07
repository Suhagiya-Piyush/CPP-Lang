#include<iostream>
using namespace std;
class Result{
    int no, maths, sci, eng, total;
    char name[20];
    double per;
    public:
    void setdata();
    int caldata();
    void getdata(){
        cout<<"Roll No. is : "<<no<<endl;
        cout<<"Name is : "<<name<<endl;
        cout<<"Maths Marks is : "<<maths<<endl;
        cout<<"Science Marks is : "<<sci<<endl;
        cout<<"English Marks is : "<<eng<<endl;
        cout<<"Total Marks is : "<<total<<endl;
        cout<<"Percentage is : "<<per<<endl;
    }
};
void Result :: setdata(){
    cout<<"Enter No. : ";
    cin>>no;
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter Maths Mark : ";
    cin>>maths;
    cout<<"Enter Science Mark : ";
    cin>>sci;
    cout<<"Enter English Mark : ";
    cin>>eng;
    caldata();
}
int Result :: caldata(){
    total = maths + sci + eng;
    per = (double)total/3;
}
int main(){
    Result r[2];
    int i;
    for(i=0;i<2;i++){
        cout<<"No : "<<i+1<<endl;
        r[i].setdata();
    }
    for(i=0;i<2;i++){
        cout<<"No : "<<i+1<<endl;
        r[i].getdata();
    }
}