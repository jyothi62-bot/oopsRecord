#include<iostream>
using namespace std;
class student
{
    private:
    int rollno,m1,m2,m3,total;
    char studentname[50];
    float avg;
    public:
    void getdata()
    {
        cout<<"enter student name";
        cin>> studentname;
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
       cout<<"\n studentname           :"  <<studentname;
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
    student s[100];
    int i,n;
    cout<<"enter how many no.of studentname:";
    cin>>n;
    for(i=0;i<n;i++)
    {
    s[i].getdata();
    s[i].calculate();
    }
    for(i=0;i<n;i++)
    s[i].display();
}