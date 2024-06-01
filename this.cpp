#include<iostream>
using namespace std;
class Kusum
{
    int x;
    public:
    void set(int x)
    {
        this->x=x;
    }
    void print()
    {
        cout<<"x="<<x<<endl;
    }
};
int main()
{
    Kusum k;
    int x=20;
    k.set(x);
    k.print();
    return 0;
}