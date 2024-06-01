#include<iostream>
using namespace std;
class Kusum
{
    public:
    Kusum()
    {
        cout<<"this is class Kusum"<<endl;
    }
};
class Niki
{
    public:
    Niki()
    {
        cout<<"this is class niki"<<endl;
    }
};
class Nikhil:public Kusum
{

};
class Nikhi:public Kusum,public Niki
{

};
int main()
{
    Nikhi t;
    return 0;
}