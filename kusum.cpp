#include <iostream>
#include<string.h>
using namespace std;
class Addamount
{
    int amt=50;
    public:
    Addamount(void);
    Addamount(int);
    void show()
    {
        cout<<"the aumount after adding:"<<amt<<endl;
    }
};
Addamount::Addamount(void)
{
    amt;
}
Addamount::Addamount(int n)
{
    amt=50+n;  
}
int main()
{
    Addamount k;
    k.show();
    Addamount t(50);
    t.show();
    return 0;
}