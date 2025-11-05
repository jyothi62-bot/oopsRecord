#include<iostream>
using namespace std;
class student
{
    private:
    int rollno,m1,m2,m3,total;
    char name[50];
    float avg;
    public:
    void getdata()
    {
        cout<<"enter name";
        cin>> name;
        cout<<"enter rollno";
        cin>>rollno;
        cout<<"enter 3 marks";
        cin>>m1>>m2>>m3;
    }
    void calculate()
    {
        total=m1+m2+m3;
        avg=total/3;
    }
    void display()
    {
       cout<<"\n name           :"  <<name;
       cout<<"\n rollno         :"<<rollno;
       cout<<"\n mark1        :"<<m1 ;
       cout<<"\n mark2         :"<<m2;
       cout<<"\n mark3         :"<<m3;
       cout<<"\n total         :"<<total;
       cout<<"\n avg           :"<<avg;
     
    }

};
int main()
{
    student s;
    s.getdata();
    s.calculate();
    s.display();
}