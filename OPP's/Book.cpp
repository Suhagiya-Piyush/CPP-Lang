#include<iostream>
using namespace std;
class BOOK{
    int book_no;
    char booktitle[20];
    float price;
    int Total_cost(int x){
        return (x*price);
    }
    public:
    void purchase(){
        int n,tp;
        float gst, gst_p;
        cout<<"No of Book Purchase : ";
        cin>>n;
        tp = Total_cost(n);
        gst = (float)tp * 0.12;
        gst_p = tp+gst;
        cout<<"Your Total Cost With Gst(12%) is : "<<gst_p;
    }
    void Input(){
        cout<<"Enter Book No. : ";
        cin>>book_no;
        cout<<"Enter Book Title : ";
        cin>>booktitle;
        cout<<"Enter Price : ";
        cin>>price;
        purchase();
    }
};
int main(){
    BOOK b;
    b.Input();
}