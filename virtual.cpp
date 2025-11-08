#include<iostream>
using namespace std;
class Base
{
    public:
    void display()
    {
    cout<<"display base";
    }
    virtual void show()
    {
        cout<<"show base:";
    }
};
class Derived:public Base{
    public:
    void display()
    {
        cout<<"display derived :";
    }
    void show()
    {
        cout<<"show derived :";
    }
};
int main()
{
Derived d;
d.display();
d.show();
}