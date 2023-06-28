#include<iostream>
#include<iomanip>
using namespace std;
class Result{
    int maths, sci, eng, tot;
    double per;
    string grd;
    public:
    void setter(){
        cout<<"Enter Maths Mark : ";
        cin>>maths;
        cout<<"Enter Science Mark : ";
        cin>>sci;
        cout<<"Enter English Mark : ";
        cin>>eng;
        cal();
    }
    void cal(){
        tot = maths+sci+eng;
        per = (double)tot/3;
        grade();
    }
    void grade(){
        if(maths>34 && sci>34 && eng>34){
            if(per>=80){
                grd="Grade A";
            }else if(per<=80 &&per>65){
                grd="Grade B";
            }else if(per<=65 &&per>50){
                grd="Grade C";
            }else if(per<=50 &&per>35){
                grd="Grade D";
            }
        }else{
            grd="Fail...";
        }
    }
    void getter(){
       /* cout<<"\n";
        cout<<"Maths : "<<maths<<endl;
        cout<<"Science : "<<sci<<endl;
        cout<<"English : "<<eng<<endl;
        cout<<"Total : "<<tot<<endl;
        cout<<"Percentage : "<<setprecision(4)<<per<<endl;*/
        cout<<"\n";
        cout<<"Maths\tScience\tEnglish\tTotal\tPercentage\tGrade"<<endl;
        cout<<maths<<"\t"<<sci<<"\t"<<eng<<"\t"<<tot<<"\t"<<setprecision(4)<<per<<"\t\t"<<grd;

    }
};
int main(){
    Result n;
    n.setter();
    n.getter();
}