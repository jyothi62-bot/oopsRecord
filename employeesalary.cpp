#include<iostream>
using namespace std;
class Employee
{
    private:
    int hra,da,ptax,total,eno,epf,gpay,netpay,basicpay;
    string ename,dept,designation,bankno,panno;
    public:
    void getdata()
    {
        cout<< "enter e.name :";
        cin>>ename;
        cout<< "enter e.no :";
        cin>>eno;
        cout<< "enter basicpay :";
        cin>>basicpay;
        cout<< "enter dept:";
        cin>>dept;
        cout<< "enter designation:";
        cin>>designation;
        cout<< "enter bankno :";
        cin>>bankno;
        cout<< "enter panno :";
        cin>>panno;
     }
     void calculate()
     {
        da=(basicpay)/100*80;
        hra=(basicpay)/100*10;
        gpay=(basicpay+da+hra);
        epf=(basicpay+da)/100*12;
        ptax=(basicpay)/100*2;
        total =epf+ptax;
        netpay=gpay-total;
     }
     void print()
     {
       cout<<"e.name  :"<<ename<<endl;
       cout<<"e.no  :"  <<eno<<endl;
       cout<<"basicpay :"<<basicpay<<endl;
       cout<<"dept :"    <<dept<<endl;
       cout<<"designation  :"<<designation<<endl;
       cout<<"bankno  :"  <<bankno<<endl;
       cout<<"panno  :"   <<panno<<endl;
       cout<<"netpay :"  <<netpay<<endl;
 }
};
int main()
{
Employee e;
e.getdata();
e.calculate();
e.print();
}
