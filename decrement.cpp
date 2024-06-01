#include<iostream>
using namespace std;
class Kusum
{
    int n;
    public:
    void get()
    {
        cout<<"Enter the value of n for increment:"<<endl;
        cin>>n;
    }
    friend void operator--(Kusum &k,int)
    {
        k.n=k.n-1;
    }
    void show()
    {
        cout<<"value of n:"<<n<<endl;
    }
};
int main()
{
    Kusum k;
    k--;
    k.get();
    operator--(k,0);
    k.show();
}