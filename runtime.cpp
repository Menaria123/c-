#include<iostream>
using namespace std;
class Kusum
{
    public:
    virtual void show()
    {
        cout<<"Hi!"<<endl;
    }
    void print()
    {
        cout<<"bye"<<endl;
    }
};
class Niki:public Kusum
{
    public:
    void show()
    {
        cout<<"Hello"<<endl;
    }
    void print()
    {
        cout<<"Nikhi"<<endl;
    }
};
int main()
{
    Kusum* k;
    Niki n;
    k=&n;
    k->show();
    k->print();
}