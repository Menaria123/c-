#include<iostream>
using namespace std;
class Date 
{
    int day;
    int month;
    int year;
    public:
    Date()
    {
        day=0;
        month=0,
        year=0;
    }
    Date(int d,int m,int y)
    {
        day=d;
        month=m;
        year=y;
    }
    void operator--(int)
    {
        day=day-1;
    }
    void showdata()
    {
        cout<<"Date="<<day<<"/"<<month<<"/"<<year<<endl;
    }
    
};
int main()
{
    Date o(3,6 ,2004);
    o.showdata();
    o.operator--(0);
    o.showdata();
    return 0;
}