#include<iostream>
using namespace std;
class EBBill
{
    private:
    int units,customerid;
    char customername[50],address[100];
    float amount;
    public:
    void getdata()
    {
        cout<<"enter customername :";
        cin>> customername;
        cout<<"enter customerid :";
        cin>>customerid;
        cout<<"enter units :";
        cin>>units;
        cout<<"enter address :";
        cin>>address;
    }
    void calculate()
    {
        if(units<=100)
        amount=0;
    else if(units<=200)
    amount=(100*2.25);
else if(units<=400)
amount=(100*2.25)+(units-200)*4.25;
else if(units<=600)
amount=(100*2.25)+(200*4.25)+(units-400)*6.25;
else 
amount=(100*2.25)+(200*4.25)+(200*6.25)+(units-600)*9;
    }
    void display()
    {
    
       cout<<"\n customername           :"  <<customername;
       cout<<"\n address                :"<<address;
       cout<<"\n customerid             :"<<customerid;
       cout<<"\n units                  :"<<units;
       cout<<"\n amount                  :"<<amount;

     
    }

};
int main()
{
    EBBill E;
    E.getdata();
    E.calculate();
    E.display();
}