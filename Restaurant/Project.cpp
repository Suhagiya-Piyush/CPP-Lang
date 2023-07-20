#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class Restaurant{
    public:
    string name, contact, items[20];
    int order, bill=0, n, IGst, SGst, T_Gst, Disc, FBill, a[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    Restaurant(){
        cout<<"\n\t\t\t\tWelcome To THE GRAND BHAGWATI\t"<<endl;
        cout<<"\n\t\t\t---------------------------------------------\n"<<endl;
    }
    void set_detail(){
        cout<<"Enter Your Name :-> ";
        cin>>name;
        cout<<"Enter Your Contact Number :-> ";
        cin>>contact;
    }
    void get_detail(){
        cout<<endl;
        cout<<"\tName :-> "<<name<<endl;
        cout<<"\tContact No. :-> "<<contact<<endl;
    }
    int Sup_start(){
        cout<<"\t\t\tSuper Starters"<<endl;
        cout<<"\t\t\t______________"<<endl;
        cout<<"\tItem\t\t\t\t\t\tPrice"<<endl; 
        cout<<"\t1. French Fries\t\t\t\t\t275/-"<<endl;
        cout<<"\t2. Monster Garlic Bread\t\t\t\t335/-"<<endl;
        cout<<"\t3. Monster Cheese Bread\t\t\t\t375/-"<<endl;
        cout<<"\t4. Chilly Garlic Mushroom\t\t\t480/-"<<endl<<endl;
        cout<<"\t\tPress 9 if You Back to Menu"<<endl<<endl;

        cout<<"Your Order : ";
        cin>>order;
        switch(order){
            case 1:
                cout<<"Enter Quantity : ";
                cin>>n;
                    a[0]+=n;
                    items[0] = "French Fries";
                bill = bill+(n*275);
                break;
            case 2:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[1]+=n;
                items[1] = "Monster Garlic Bread";
                bill = bill+(n*335);
                break;
            case 3:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[2]+=n;
                items[2] = "Monster Cheese Bread";
                bill = bill+(n*375);
                break;
            case 4:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[3]+=n;
                items[3] = "Chilly Garlic Mushroom";
                bill = bill+(n*480);
                break;
            case 9:
                bill=bill;
                break;
            default:
                cout<<"OOps...Wrong Choice.......\n";
                break;
        }return bill;
    }
    int Soup(){
        cout<<"\t\t\tSteaming Soup"<<endl;
        cout<<"\t\t\t______________"<<endl;
        cout<<"\tItem\t\t\t\t\t\tPrice"<<endl; 
        cout<<"\t1. Tomato Soup\t\t\t\t\t340/-"<<endl;
        cout<<"\t2. Manchow Soup\t\t\t\t\t355/-"<<endl;
        cout<<"\t3. Creamy Corn Soup\t\t\t\t375/-"<<endl;
        cout<<"\t4. Thai Coconut Lime Soup\t\t\t420/-"<<endl<<endl;
        cout<<"\t\tPress 9 if You Back to Menu"<<endl<<endl;
        
        cout<<"Your Order : ";
        cin>>order;
        switch(order){
            case 1:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[4]+=n;
                items[4] = "Tomato Soup";
                bill = bill+(n*340);
                break;
            case 2:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[5]+=n;
                items[5] = "Manchow Soup";
                bill = bill+(n*355);
                break;
            case 3:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[6]+=n;
                items[6] = "Creamy Corn Soup";
                bill = bill+(n*375);
                break;
            case 4:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[7]+=n;
                items[7] = "Thai Coconut Lime Soup";
                bill = bill+(n*420);
                break;
            case 9:
                bill=bill;
                break;
            default:
                cout<<"OOps...Wrong Choice.......\n";
                break;
        }return bill;
    }
    int Pasta(){
        cout<<"\t\t\t     Pasta"<<endl;
        cout<<"\t\t\t______________"<<endl;
        cout<<"\tItem\t\t\t\t\t\tPrice"<<endl; 
        cout<<"\t1. Arabiata\t\t\t\t\t655/-"<<endl;
        cout<<"\t2. Aglo Olio\t\t\t\t\t675/-"<<endl;
        cout<<"\t3. Quatro Formaggio\t\t\t\t685/-"<<endl;
        cout<<"\t4. Pesto Pepper\t\t\t\t\t690/-"<<endl<<endl;
        cout<<"\t\tPress 9 if You Back to Menu"<<endl<<endl;

        cout<<"Your Order : ";
        cin>>order;
        switch(order){
            case 1:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[8]+=n;
                items[8] = "Arabiata";
                bill = bill+(n*655);
                break;
            case 2:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[9]+=n;
                items[9] = "Aglo Olio";
                bill = bill+(n*675);
                break;
            case 3:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[10]+=n;
                items[10] = "Quatro Formaggio";
                bill = bill+(n*685);
                break;
            case 4:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[11]+=n;
                items[11] = "Pesto Pepper";
                bill = bill+(n*690);
                break;
            case 9:
                bill=bill;
                break;
            default:
                cout<<"OOps...Wrong Choice.......\n";
                break;
        }return bill;
    }
    int Pizza(){
        cout<<"\t\t\t     Pizza"<<endl;
        cout<<"\t\t\t______________"<<endl;
        cout<<"\tItem\t\t\t\t\t\tPrice"<<endl; 
        cout<<"\t1. Margherita\t\t\t\t\t900/-"<<endl;
        cout<<"\t2. Verduras\t\t\t\t\t1000/-"<<endl;
        cout<<"\t3. Hot N Fiery \t\t\t\t\t1100/-"<<endl;
        cout<<"\t4. AlFunghi \t\t\t\t\t1200/-"<<endl;
        cout<<"\t5. Pesto\t\t\t\t\t1300/-"<<endl;
        cout<<"\t6. Four Seasons\t\t\t\t\t1400/-"<<endl;
        cout<<"\t7. Indienne\t\t\t\t\t1500/-"<<endl;
        cout<<"\t8. Oriental\t\t\t\t\t1600/-"<<endl<<endl;
        cout<<"\t\tPress 9 if You Back to Menu"<<endl<<endl;

        cout<<"Your Order : ";
        cin>>order;
        switch(order){
            case 1:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[12]+=n;
                items[12] = "Margherita";
                bill = bill+(n*900);
                break;
            case 2:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[13]+=n;
                items[13] = "Verduras";
                bill = bill+(n*1000);
                break;
            case 3:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[14]+=n;
                items[14] = "Hot N Fiery";
                bill = bill+(n*1100);
                break;
            case 4:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[15]+=n;
                items[15] = "AlFunghi";
                bill = bill+(n*1200);
                break;
            case 5:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[16]+=n;
                items[16] = "Pesto";
                bill = bill+(n*1300);
                break;
            case 6:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[17]+=n;
                items[17] = "Four Seasons";
                bill = bill+(n*1400);
                break;
            case 7:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[18]+=n;
                items[18] = "Indienne";
                bill = bill+(n*1500);
                break;
            case 8:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[19]+=n;
                items[19] = "Oriental";
                bill = bill+(n*1600);
                break;
            case 9:
                bill=bill;
                break;
            default:
                cout<<"OOps...Wrong Choice.......\n";
                break;
        }return bill;
    }
    int Cancel(){
        for(int i=0;i<20;i++)
        {
            if(a[i]>0)
            {
                a[i] = 0;
                items[i] = "";
            }
        }
        return bill = 0;
    }
    int Discount(int b){
        if(b>=5000)
            Disc = b * 0.1;
        else 
            Disc = 0;
        return Disc;
    }
    int Gst(int b){
        SGst = round(b * 0.025);
        IGst = round(b * 0.025);
        T_Gst = SGst + IGst;
        return T_Gst;
    }
    int Final_Bill(int b, int Disc_Amt, int gst){
        FBill = b - Disc_Amt + gst;
        return FBill;
    }
    void Tq(){
        cout<<"\n\t*\tThank You for Visiting Us...."<<endl;
        cout<<"\t*\tCome Again....\n"<<endl;
    }
    int Get_order(){
        cout<<"\n\t Your Orderd Details : "<<endl;    
            for (int i = 0; i <= 19; i++)
            {
                if (!items[i].empty())
                    cout<<items[i]<<" :-> "<<a[i]<<endl;
            }
    }
};

int main(){
    Restaurant R;
    int ch, b=0, gst=0,Disc_Amt=0, Bill=0,x=0;
    R.set_detail();
    cout<<"\n\t\t\t\tMENU"<<endl<<endl;
    do{
        cout<<"\n\t1. Super Starters"<<endl;
        cout<<"\t2. Steaming Soup"<<endl;
        cout<<"\t3. Pasta"<<endl;
        cout<<"\t4. Pizza"<<endl;
        cout<<"\t\tPress 0 if You Complet Order"<<endl;
        cout<<"\t\tPress 9 if You Cancel Order"<<endl<<endl;
        cout<<"Enter Your Choice : ";
        cin>>ch;
        switch(ch){
            case 1:
                x=0;
                b = R.Sup_start();
                break;
            case 2:
                
                x=0;
                b = R.Soup();
                break;
            case 3:
                x=0;
                b = R.Pasta();
                break;
            case 4:
                x=0;
                b = R.Pizza();
                break;
            case 9:
                b = R.Cancel();
                break;
            case 0:
                break;
            default:
                cout<<"OOps...Wrong Choice.......\n";
                break;
        }
    }while(ch!=0);
    
        Disc_Amt = R.Discount(b);
        gst = R.Gst(b-Disc_Amt);
        Bill = R.Final_Bill(b, Disc_Amt, gst);
        R.get_detail();
        R.Get_order();
        cout<<"\n\n\tBill"<<endl;
        cout<<"Your Actual Bill \t: "<<b<<endl;
        cout<<"Your Disc \t\t: "<<Disc_Amt<<endl;
        cout<<"After Discount \t\t: "<<b-Disc_Amt<<endl;
        cout<<"SGST \t\t\t: "<<gst/2<<endl;
        cout<<"IGST \t\t\t: "<<gst/2<<endl;
        cout<<"Total GST is \t\t: "<<gst<<endl;
        cout<<"Your Final Bill is \t: "<<Bill<<endl;
        R.Tq();
}