#include<iostream>
using namespace std;
class books
{
    private:
    int accno,pages;
    char bookname[50],author[50],ISBNo[50];
    float price;
    public:
    void getdata()
    {
        cout<<"enter bookname";
        cin>>bookname;
        cout<<"enter  author";
        cin>>author;
        cout<<"enter accno";
        cin>>accno;
        cout<<"enter ISBNo";
        cin>>ISBNo;
        cout<<"enter pages";
        cin>>pages;
        cout<<"enter price";
        cin>>price;
    }
    void display()
    {
         cout<<"\n----------- book details------------";
       cout<<"\n bookname        :"  <<bookname;
       cout<<"\n author         :"<<author;
       cout<<"\n accno         :"<<accno;
       cout<<"\n ISBNo          :"<<ISBNo;
       cout<<"\n pages          :"<<pages;
       cout<<"\n price         :"<<price<<endl;
       cout<<"----------------------------------"<<endl;
    }
};
int main()
{
   books b[50];
   
    b.getdata();

    b.display();
   }