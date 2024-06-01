#include<iostream>
using namespace std;
class Time
{
  int seconds;
  public:
  Time()
  {
      seconds=0;
  }
  Time(int s)
  {
      seconds=s;
  }
  void operator--(int)
  {
      seconds=seconds-1;
  }
  void showdata()
  {
      cout<<"seconds:"<<seconds<<endl;
  }
};
int main()
{
    Time t(10);
    t.showdata();
    t.operator--(0);
    t.showdata();
    
    return 0;
}