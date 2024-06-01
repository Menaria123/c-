#include<iostream>
using namespace std;
class Kusum
{
    int num;
    public:
    Kusum()
    {
        num=20;
    }
    friend class Niki;
};
class Niki
{
    public:
    void show(Kusum& k)
    {
        cout<<"The value is="<<k.num;
    }
};
int main()
{
    Kusum t;
    Niki n;
    n.show(t);
    return 0;
}