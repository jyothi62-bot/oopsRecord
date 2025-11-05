#include<iostream>
using namespace std;
class Time
{
    private:
    int hrs,mins;
    public:
    void gettime();
    void calculatetime(Time x1,Time x2);
    void displaytime();
};
void Time::gettime()
{
    cout<<"enter hrs :";
    cin>>hrs;
    cout<<"enter min  :";
    cin>>mins;
}
void Time::calculatetime(Time x1,Time x2)
{
    mins=x1.mins+x2.mins;
    hrs=mins/60;
    mins=mins%60;
    hrs=hrs+x1.hrs+x2.hrs;
}
void Time::displaytime()
{
    cout<<"\n hrs  :"<<hrs;
    cout<<"\n mins  :"<<mins;
}
int main()
{
    Time T1,T2,T3;
    T1.gettime();
    T2.gettime();
    T3.calculatetime(T1,T2);
    T1.displaytime();
    T2.displaytime();
    T3.displaytime();
}