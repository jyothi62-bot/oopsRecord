#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int rollno;
    public:
    void getstudent()
    {
        cout<<"enter student name :";
        cin>>name;
        cout<<"enter student rollno :";
        cin>>rollno;
    }
    void displaystudent()
    {
        cout<<"student  name :    "<<name<<endl;
        cout<<"student rollno :"<<rollno<<endl;
    }
};
class address:public student
{
    private:
    string city;
    public:
    void getaddress()
    {
        getstudent();
        cout<<"\n enter city :";
        cin>>city;
    }
    void displayaddress()
    {
        displaystudent();
        cout<<"\n city    :"<<city;
    }

};
int main()
{
    
    address a;
    
    
    a.getaddress();
    a.displayaddress();
}
