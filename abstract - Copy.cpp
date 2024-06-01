#include<iostream>
using namespace std;
class Kusum
{
    public:
    virtual void show()=0;
};
class Niki:public Kusum
{
    public:
    void show()
    {
        cout<<"Hi!niki";
    }
};
int main()
{
    Niki n;
    n.show();
}