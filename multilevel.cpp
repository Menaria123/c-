#include<iostream>
using namespace std;
class Kusum
{
    public:
    Kusum()
    {
        cout<<"this is class Kusum\n";
    }
};
class Niki:public Kusum
{
    public:
    Niki()
    {
        cout<<"this is class Niki\n";
    }
};
class Nikhil: public Niki
{
    public:
    Nikhil()
    {
        cout<<"this is class Nikhil";
    }   
};
int main()
{
    Nikhil k;
    return 0;
}