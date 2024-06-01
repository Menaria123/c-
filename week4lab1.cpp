#include<iostream>
using namespace std;
class base
{
    int x;
    protected:
    int y;
    public:
    int z;
    void get() 
    {
        cout<<"Enter the value of x:"<<endl;
        cin>>x;
    }
    void show()
    {
        cout<<"Value of x is:"<<x<<endl;
    }
};
class Derived:private base
{
    public:
    void getdata()
    {
        get();
        cout<<"Enter the value of y:"<<endl;
        cin>>y;
        cout<<"Enter the value of z:"<<endl;
        cin>>z;
    }
    void showdata()
    {
        show();
        cout<<"Value of y is "<<y<<endl;
        cout<<"value of z is "<<z<<endl;
    }
};
int main()
{
    Derived d;
    d.getdata();
    d.showdata();
    return 0;
}