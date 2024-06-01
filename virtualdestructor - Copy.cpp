#include<iostream>
using namespace std;
class Kusum
{
    public:
    Kusum()
    {
        cout<<"Consturctor of Kusum"<<endl;
    }
    virtual ~Kusum()
    {
        cout<<"desturctor of Kusum"<<endl;
    }
};
class Niki:public Kusum
{
    public:
    Niki()
    {
        cout<<"Consturctor of Niki"<<endl;
    }
    ~Niki()
    {
        cout<<"desturctor of Niki"<<endl;
    }
};
int main()
{
    Niki *n=new Niki();
    Kusum *k=n;
    delete k;
}