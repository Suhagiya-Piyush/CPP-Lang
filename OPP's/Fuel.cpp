#include<iostream>
using namespace std;
class Fuelcal{
    int fno;
    float distance, fual;
    string destination;
    int calfuel(){
        if(distance<=1000)
            fual=500;
        else if(distance>1000 && distance<=2000)
            fual=1100;
        else
            fual=2200;
    }
    public:
    void Feedifo(){
        cout<<"Enter Flight Number : ";
        cin>>fno;
        cout<<"Enter Destination : ";
        cin>>destination;
        cout<<"Enter Distance : ";
        cin>>distance;
        calfuel();
    }
    void Showinfo(){
        cout<<"Flight Number is : "<<fno<<endl;
        cout<<"Destination : "<<destination<<endl;
        cout<<"Distance : "<<distance<<endl;
        cout<<"Fuel : "<<fual<<endl;
    }
};
int main(){
    Fuelcal f;
    f.Feedifo();
    f.Showinfo();
}