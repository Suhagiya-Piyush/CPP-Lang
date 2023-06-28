#include<iostream>
using namespace std;
class Report{
    int adno, marks[5], tot=0, i;
    char name[20];
    float avg;
    float Giv_avg(){
        avg=tot/5;
    }
    public:
    int Readinfo(){
        cout<<"Enter Add No. : ";
        cin>>adno;
        cout<<"Enter Name : ";
        cin>>name;
        for(i=0;i<5;i++){
            switch(i){
                case 0:
                cout<<"Enter English Marks : ";
                break;
                case 1:
                cout<<"Enter Science Marks : ";
                break;
                case 2:
                cout<<"Enter Maths Marks : ";
                break;
                case 3:
                cout<<"Enter Gugarati Marks : ";
                break;
                case 4:
                cout<<"Enter Hindi Marks : ";
                break;
            }
            cin>>marks[i];
            tot=tot+marks[i];
        }Giv_avg();
    }
    int Displayinfo(){
        cout<<"\n";
        cout<<"Admin No : "<<adno<<endl;
        cout<<"Admin Name : "<<name<<endl;
        for(i=0;i<5;i++){
            switch(i){
                case 0:
                    cout<<"English : "<<marks[0]<<endl;
                break;
                case 1:
                    cout<<"Science : "<<marks[1]<<endl;
                break;
                case 2:
                    cout<<"Maths : "<<marks[2]<<endl;
                break;
                case 3:
                    cout<<"Gujarati : "<<marks[3]<<endl;
                break;
                case 4:
                    cout<<"Hindi : "<<marks[4]<<endl;
                break;
            }
        }
        cout<<"Total Marks : "<<tot<<endl;
        cout<<"Your Average Marks Is : "<<avg;
    }
};
int main(){
    Report r;
    r.Readinfo();
    r.Displayinfo();
}