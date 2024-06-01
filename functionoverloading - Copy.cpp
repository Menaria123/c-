#include<iostream>
using namespace std;
class Kusum
{
    public:
void add(int a)
{
    cout<<"The value of a is "<<a<<endl;
}
void add(double a)
{
    cout<<"The value of a is "<<a<<endl;
}
};
int main()
{
    Kusum k;
    k.add(7);
    k.add(7.5555);
}