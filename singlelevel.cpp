#include<iostream>
using namespace std;
class Kusum
{
    public:
    Kusum()
    {
        cout<<"this id the base calss";
    }

};
class Riya:public Kusum
{
};
int main()
{
    Riya r;
    return 0;
}