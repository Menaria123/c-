#include <iostream>
using namespace std;
class Kusum
{
    private:
    int num1,num2;
    public:
    Kusum()
    {
        num1=0;
        num2=0;
    }
    void setdata(int x,int y)
    {
        num1=x;
        num2=y;
    }
    void show()
    {
        cout<<"a="<<num1<<"b="<<num2<<endl;
    }
    Kusum(Kusum &k)
    {
        num1=k.num1;
        num2=k.num2;
    }
};
int main()
{
   Kusum d1;
   d1.setdata(1,2);
   d1.show();
   Kusum d2=d1;
   d2.show();
   d2.setdata(4,5);
   d1.show();
   d2.show();
    return 0;
}