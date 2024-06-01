#include <iostream>
using namespace std;
class Employee
{
    string name;
    protected:
    int id;
    int salary;

public:
    void get()
    {
        cout << "Enter your name of employee:";
        cin.ignore();
        getline(cin,name);
    }
    void show()
    {
        cout<<"Name of Employee:"<<name<<endl;
    }
};
class Derived:protected Employee
{
    public:
    void getdata()
    {
        get();
        cout<<"Enter your id:";
        cin>>id;
        cout<<"Enter your salary:";
        cin>>salary;
    }
    void showdata()
    {
        show();
        cout<<"ID of employee:"<<id<<endl;
        cout<<"Salary of employee:"<<salary<<endl<<"\n";
    }
};
int main()
{
    Derived d;
    d.getdata(); 
    d.getdata();
    d.getdata();
    d.showdata();
    d.showdata();
    d.showdata();
    return 0;
}