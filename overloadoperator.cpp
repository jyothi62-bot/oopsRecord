#include<iostream>
using namespace std;
class unaryOP
{
    private:
    int x,y,z;
    public:
    unaryOP()
    {
        x=0,y=0,z=0;
    }
    unaryOP(int a,int b,int c)
    {
        x=a,y=b,z=c;
    }
    void display()
    {
        cout<<"\n\n\t"<<x<<""<<y<<""<<z;
    }
    void operator-()
    {
        x=-x,y=-y,z=-z;
    }
};
int main()
{
    unaryOP un(10,-40,70);
    cout<<"\n\n numbers are :::\n";
    un.display();
    -un;
    cout<<"\n\n numbers are after overloaded minus(-) operator :::\n";
    un.display();
}