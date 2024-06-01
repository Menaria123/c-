#include<iostream>
using namespace std;
class Kusum 
{
    private:
    int num1,num2;
    int* ptr;
    public:
    Kusum()
    {
        num1=0;
        num2=0;
        ptr=new int;
    }
    void set(int x,int y,int z)
    {
        num1=x;
        num2=y;
        *ptr=z;
    }
    void show()
    {
        cout<<"A="<<num1<<"b="<<num2<<"*ptr="<<*ptr<<endl;
    }
    Kusum(Kusum &k)
    {
        num1=k.num1;
        num2=k.num2;
        ptr=new int;
        *ptr=*(k.ptr);
    }
    ~Kusum()
    {
        delete ptr;
    }
};
int main()
{
    Kusum k1;
    k1.set(1,2,3);
    k1.show();
    Kusum k2=k1;
    k2.show();
    k2.set(4,5,6);
    k1.show();
    k2.show();
}