#include<iostream>
using namespace std;
class Kusum
{
    public:
    Kusum()
    {
        cout<<"this is class kusum\n";
    }
};
class Niki
{
    public:
    Niki()
    {
        cout<<"this is class Niki"<<endl;
    }
};
class Nikhil:public Kusum,public Niki
{
    public:
    Nikhil()
    {
        cout<<"this is class nikhil"<<endl;
    }
};
int main()
{
    Nikhil k;
    return 0;
}