#include<iostream>
using namespace std;
class Kusum
{
    int x;
    //int y;
    public:
    void get()
    {
        cout<<"Enter the value of x:"<<endl;
        cin>>x;
        //cout<<"Enter the value of y:"<<endl;
        //cin>>y;
    }
    void show()
    {
        cout<<"The value of x="<<x<<endl;
    }
    friend void operator-(Kusum &o)
    {
        o.x=-o.x;
    }
};
int main()
{
    Kusum k;
    -k;
    k.get();
    k.show();
    operator-(k);
    k.show();

}