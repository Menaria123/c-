#include<iostream>
using namespace std;
class A 
{
  public:
  int a;
  int b;
  A(){a=0;b=0;}
  void showdata()
  {
      cout<<"Enter the value of a and b for class a:";
      cin>>a>>b;
      cout<<"The value of a and b you have entered in class A is "<<a<<b<<endl;
  }
};
class B:public A
{
    public:
    void showdata()
    {
      cout<<"Enter the value of a and b for class a:";
      cin>>a>>b;
      cout<<"The value of a and b you have entered in class A is "<<a<<b<<endl;
    }
};
class C:public B
{
    public:
    void display()
    {
    cout<<"Enter the value of a and b for class a:";
    cin>>a>>b;
    cout<<"The value of a and b you have entered in class A is "<<a<<b;
    }
};
int main()
{
 C d1;
 d1.A::showdata();
 return 0;
}