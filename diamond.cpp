#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"The consturctor of class A"<<endl;
    }
};
class B:virtual public A
{
    public:
    B()
    {
        cout<<"The consturctor of class B"<<endl;
    }
};
class C:virtual public A
{
    public:
    C()
    {
        cout<<"The consturctor of class C"<<endl;
    }
};
class D:public B,public C
{
    public:
    D()
    {
        cout<<"The consturctor of class D"<<endl;
    }    
};
int main()
{
    D e;
}