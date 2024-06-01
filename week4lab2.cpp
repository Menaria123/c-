#include<iostream>
using namespace std;
class Parent1
{
    public:
    void show()
    {
        cout<<"Parent 1"<<endl;
    }
};
class Parent2
{
    public:
    void show()
    {
        cout<<"Parent 2"<<endl;
    }
};
class child:protected Parent1,protected Parent2
{
   public:
   void showdata()
   {
    Parent1::show();
    Parent2::show();
   }
};
int main()
{
    child c;
    c.showdata();
    return 0;

}