#include<iostream>
using namespace std;
class Kusum
{
    public:
    Kusum()
    {
        cout<<"Constructor created"<<endl;
    }
    ~Kusum()
    {
        cout<<"destructor created"<<endl;
    }
};
int main()
{
    Kusum k; 
    return 0;
}