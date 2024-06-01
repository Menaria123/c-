#include<iostream>
using namespace std;
class Kusum
{
    int a;
    public:
    Kusum(int a)
    {
        this->a= a;
        cout<<"Defualt constructor"<<a<<endl;
    }
    ~Kusum()
    {
        cout<<"Destructor"<<a<<endl;
    }
};
int main()
{
    Kusum k1(10);
    Kusum k2(20);
    delete &k1;
    Kusum k3(30);
    return 0;
    
}