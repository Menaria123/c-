#include<iostream>
using namespace std;
class Kusum
{
  int *arr;
  int size;
  public:
  Kusum()
  {
    size=0;
  }
  Kusum(int n)
  {
    size=n;
    arr=new int[n];
  }
  void getdata()
  {
    int i;
    for(i=0;i<size;i++)
    {
        cout<<"Enter the elements of the array:"<<i<<endl;
        cin>>arr[i]; 
    }
  }
  void showdata()
  {
    int i;
    for(i=0;i<size;i++)
    {
        cout<<"the entered values are"<<arr[i]<<endl;
    }
  }
};
int main()
{
    Kusum k;
    k.getdata();
    k.showdata();
    return 0;
}