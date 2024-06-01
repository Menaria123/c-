#include<iostream>
using namespace std;
class Kusum
{
    string name;
    int age;
    public:
    Kusum()
    {
        name="\0";
        age=0;
    }
    Kusum(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
    }
    void* operator new(size_t size)
    {
        cout<<"overloading new operator with size"<<size<<endl;
        void* p=::operator new(size);
        return p;
    }
    void operator delete(void *p)
    {
         cout<<"Destructor called"<<endl;
        free(p);
    }
    
};
int main()
{
    Kusum *p=new Kusum("Kusum",18);
    cout<<sizeof(Kusum)<<endl;
    p->display();
    delete p;
}