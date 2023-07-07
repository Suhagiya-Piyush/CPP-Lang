//Object as Array & Function Outside of the Class

#include<iostream>
using namespace std;
class Test{
    int n;
    public:
    void sten();
    void getn(){
        cout<<"Value of N : "<<n<<endl;
    }
};
void Test :: sten(){
    cout<<"Enter N : ";
    cin>>n;
}
int main(){
    Test a[4];
    int i;
    for(i=0;i<2;i++){
        cout<<"No : "<<i+1<<endl;
        a[i].sten();
    }
    for(i=0;i<2;i++){
        cout<<"No : "<<i+1<<endl;
        a[i].getn();
    }
}