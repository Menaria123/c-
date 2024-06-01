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
    friend void Niki(Kusum& k);
};
void Niki(Kusum& k)
{
    cout<<"The value is:"<<k.num<<endl;
}
int main()
{
    Kusum t;
    Niki(t);
    return 0;
}