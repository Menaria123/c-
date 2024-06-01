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
        cout << "enter the amount of fees paid:" << endl;
        cin >> fees;
    }
    void showdata()
    {
        cout << "===============================================================";
        cout << "Name of student:" << name << endl;
        cout << "Roll.no of student:" << rollno << endl;
        cout << "***************************************************************";
        cout << "The fees aumount paid:" << fees << endl;
        cout << "THANK YOU!" << endl;
    }
};
class Result : public Fees
{
    int marks;
    char garde;

public:
    void get_data()
    {
        Student::get();
        getdata();
    }
    void show_data()
    {
    }
};
int main()
{
    Result r;
    r.get_data();
    r.show_data();
    return 0;
}