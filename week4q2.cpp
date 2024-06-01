#include <iostream>
using namespace std;
class Student
{
protected:
    int rollno;
    string name;

public:
    void virtual get()
    {
        cout << "Enter your name:";
        getline(cin, name);
        cout << "Enter your roll no:";
        cin >> rollno;
    }
    void show()
    {
        cout << "Name of student:" << name << endl;
        cout << "Roll.no of student:" << rollno << endl;
    }
};
class Fees : public Student
{
protected:
    int fees;

public:
    void getdata()
    {
        get();
        cout << "enter the amount of fees paid:" << endl;
        cin >> fees;
    }
    void showdata()
    {
        show();
        cout << "===============================================================";
        cout << "Name of student:" << name << endl;
        cout << "Roll.no of student:" << rollno << endl;
        cout << "***************************************************************";
        cout << "The fees aumount paid:" << fees << endl;
        cout << "THANK YOU!" << endl;
    }
};
class Result :public Fees
{
    int marks;
    char grade;
    public:
    Result(int a)
    {
        marks=a;
    }
    void get_data()
    {
        getdata();
    }
    void show_data()
    {
        showdata();
        if(marks==100)
        {
            grade='O';
        }
        else if(marks<=90)
        {
            grade='A';
        }
        else if(marks<=80)
        {
            grade='B';
        }
        else if(marks<=70)
        {
            grade='c';
        }
        else if(marks<=60)
        {
            grade='D';
        }
        else if(marks<=35)
        {
            grade='E';
        }
        else
        {
            grade='F';
        }
        std::cout<<"Obtain grade:"<<grade<<endl;
    }
};
int main()
{
    Result r(98);
    r.get_data();
    r.show_data();
    return 0;
}