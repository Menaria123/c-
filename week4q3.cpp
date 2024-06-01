#include<iostream>
using namespace std;
class Employee
{
    int empo;
    string name;
    string designation;
    public:
    void get()
    {
        cout<<"Enter employee Id no:";
        cin>>empo;
        cout<<"Enter Name of employee:";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter employee's designation:";
        cin>>designation;
    }
    void show()
    {
        cout<<"ID of employee:"<<empo<<endl;
        cout<<"Name of employee:"<<name<<endl;
        cout<<"Designation of employee:"<<designation<<endl;
    }
};
class Qualification:public Employee
{
    protected:
    int ug,pg,experience;
    void getdata()
    {
        get();
        cout<<"Enter the UG Qualification:";
        cin>>ug;
        cout<<"Enter the PG Qualification:";
        cin>>pg;
        cout<<"Enter the experience in years:";
        cin>>experience;

    }
    void showdata()
    {
        show();
        cout<<"UG Qualification:"<<ug<<endl;
        cout<<"PG Qualification:"<<pg<<endl;
        cout<<"Experience:"<<experience<<endl;
    }
};
class Salary:public Qualification
{
    float increment;
    public:
    void get_data()
    {
        getdata();
        if(experience>=5)
        {
            increment=0.15;
        }
        else if(experience>=3)
        {
            increment=0.10;
        }
        else
        {
            increment=0.05;
        }
    }
    void show_data()
    {
        showdata();
        cout<<"Increment:"<<increment<<"%"<<endl;
    }
};
int main()
{
    Salary s;
    s.get_data();
    s.show_data();
    return 0;
}