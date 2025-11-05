#include<iostream>
using namespace std;
int area(int side);
int area(int l,int b);
float area(float r);
float area(float a,float c);

int main()
{
    int side,l,b;
    float r,a,c;
    cout<<"side:";
    cin>>side;
    cout<<"\n area of square :";
    cout<<area(side)<<endl;
    cout<<"l,b :";
    cin>>l>>b;
    cout<<"\n area of rectangle :";
    cout<<area( l,b)<<endl;
    cout<<"r :";
    cin>>r;
    cout<< "\n area of circle :";
    cout<<area( r)<<endl;
    cout<<"a,c :";
    cin>>a>>c;
    cout<<"\n area of triangle :";
    cout<<area( a,c)<<endl;
    return 0;
}
int area(int side)
{
    return(side*side);
}
int area(int l,int b)
{
    return(l*b);
}
float area(float r)
{
    return(3.14f*r*r);
}
float area(float a,float c)
{
    return(0.5f*a*c);
}