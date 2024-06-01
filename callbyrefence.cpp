#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
    cout<<"Afer swaping x:"<<*x<<"y:"<<*y<<endl;
}
int main()
{
    int a=1,b=2;
    cout<<"Before swapping:";
    cout<<"x:"<<a<<"y:"<<b<<endl;
    swap(&a,&b);
    return 0;
}