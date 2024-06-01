#include<iostream>
using namespace std;
class Kusum
{
    public:
    Kusum()
    {
    cout<<"this is class Kusum "<<endl;
    }
};
class Niki:public Kusum
{
    public:
    Niki()
    {
     cout<<"this is class Niki"<<endl;   
    }
};
class Nikhil:public Kusum
{
    public:
    Nikhil()
    {
        cout<<"this is class nikhil"<<endl;
    }
};
int main()
{
    Niki k;
    Nikhil n;
    return 0;
}