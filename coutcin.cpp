#include<iostream>
using namespace std;
class Test
{
    int num;
    public:
    Test()
    {
        num=0;
    }
    friend istream& operator>>(istream &i,Test &t)
    {
        i>>t.num;
    }
    friend ostream& operator<<(ostream &o,Test &t)
    {
        o<<t.num;
    }
};
int main()
{
    Test c1,c2;
    cin>>c1>>c2;
    cout<<c1<<c2<<endl;//we cannot use <<endl if we use "friend void "but for using <<endl we use "friend istream"
    return 0;
}