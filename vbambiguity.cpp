#include<iostream>
using namespace std;
class A
{
    public:
    int a;
};
class B:virtual public A
{
    public:
    int b;
};
class C:virtual public A
{
    public:
    int c;
};
class D:public B, public C
{
}; 
int main()
{
    D e;
    e.a=10;
    e.a=100;

    e.b=20;
    e.c=30;
    

    cout<<"\na:"<<e.a;
    cout<<"\nb:"<<e.b;
    cout<<"\nc:"<<e.c;
   
}