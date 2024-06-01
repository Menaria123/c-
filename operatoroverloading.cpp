#include<iostream>
using namespace std;
class Kusum
{
    int x;
    public:
    void get()
    {
        cout<<"Enter the value of x:"<<endl;
        cin>>x;
    }
    void show()
    {
        cout<<"The value of x="<<x<<endl;
    }
    void operator-()
    {
        x=-x;
    }
};
int main()
{
    Kusum k;
    -k;
    k.get();
    k.show();
    k.operator-();
    k.show();

}