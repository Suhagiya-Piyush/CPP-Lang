#include<iostream>
using namespace std;
class Saving{
    int depo, with, balance=0;
    public:
    Saving(){
        cout<<"\n";
        cout<<"\t\tYou are in Saving Acount..."<<endl;
        cout<<"\n";
    }
    int Deposite(){                         //To Deposite
        cout<<"Enter Amount : ";
        cin>>depo;
        if(depo>20000){
            cout<<"You are Not Eligible fot this Amount..."<<endl;
            cout<<"Enter Belowe 20000..."<<endl;
        }else{
            balance = balance + depo;
        }
    }
    int Withdrawal(){                        //To Withdrowl
        cout<<"Enter Amount : ";
        cin>>with;
        if(with>20000){
            cout<<"You are Not Eligible fot this Amount..."<<endl;
            cout<<"Enter Belowe 20000..."<<endl;
        }else{
            balance = balance - with;
        }
    }
    int View_bal(){
        cout<<"Your Balance Is : "<<balance<<endl;
    }
};
class Current{
    int depo, with, balance=0;
    public:
    Current(){
        cout<<"\n";
        cout<<"\t\tYou are in Current Acount..."<<endl;
        cout<<"\n";
    }
    int Deposite(){                         //To Deposite
        cout<<"Enter Amount : ";
        cin>>depo;
        balance = balance + depo;
    }
    int Withdrawal(){                        //To Withdrowl
        cout<<"Enter Amount : ";
        cin>>with;
        balance = balance - with;
    }
    int View_bal(){
        cout<<"Your Balance Is : "<<balance<<endl;
    }
};

int main(){
    int n, ch;
    cout<<"\n";
    cout<<"\tPress 1 For Saving"<<endl;
    cout<<"\tPress 2 For Current"<<endl;
    cout<<"\n";
    cout<<"Enter Your Choice : ";
    cin>>n;
    if(n==1){
        Saving S;
        cout<<"\n";
        cout<<"Press 1 for Deposite Amount"<<endl;
        cout<<"Press 2 for Withdrawal Amount"<<endl;
        cout<<"Press 3 for Display Your Balance"<<endl;
        //cout<<"Press 4 for Move to Current A/C"<<endl;
        cout<<"Press 0 for Exit";
        cout<<"\n\n";
        do{
            cout<<"Choice Your Transaction : ";
            cin>>ch;

            switch(ch){
                case 1:
                    S.Deposite();
                    break;
                case 2:
                    S.Withdrawal();
                    break;
                case 3:
                    S.View_bal();
                    break;
                //case 4:
                    //Current C;
                    //C.Deposite();
                    //break;
                case 0: 
                    break;
                default:
                    printf("Wrong Choice....Choice Valid Transaction...\n");
                    break;
            }
            /*if(ch==1)
                S.Deposite();
            else if(ch==2)
                S.Withdrawal();
            else if(ch==3)
                S.View_bal();
            else if(ch==4){
                Current C;
                
            }else if(ch==0)
                break;
            else
                printf("Wrong Choice....Choice Valid Transaction...\n");*/

        }while(ch!=0);
    }else if(n==2){
        Current C;
        cout<<"\n";
        cout<<"Press 1 for Deposite Amount"<<endl;
        cout<<"Press 2 for Withdrawal Amount"<<endl;
        cout<<"Press 3 for Display Your Balance"<<endl;
        //cout<<"Press 4 for Move to Saving A/C"<<endl;
        cout<<"Press 0 for Exit";
        cout<<"\n\n";
        do{
            cout<<"Choice Your Transaction : ";
            cin>>ch;

            switch(ch){
                case 1:
                    C.Deposite();
                    break;
                case 2:
                    C.Withdrawal();
                    break;
                case 3:
                    C.View_bal();
                    break;
                //case 4:
                    //Saving S;
                    //break;
                case 0: 
                    break;
                default:
                    printf("Wrong Choice....Choice Valid Transaction...\n");
                    break;
            }
        }while(ch!=0);
    }else{
        cout<<"Ooopsss..."<<endl;
        cout<<"You Enter Wrong A/C Num..."<<endl;
        cout<<"Enter Valid A/C Num. & Try Again..."<<endl;
    }
}