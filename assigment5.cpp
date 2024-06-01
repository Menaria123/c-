#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class information
{
    public:
    string name,email,address,phone;
    int age,birthyear;
    int cal()
    {
        return 2023 - age;
    }
};

int main()
{
    ofstream fout,fout2;
    ifstream fin, fin2;
    int n;
    cout<<"Enter the data:";
    cin>>n;
    cin.ignore();
    information a[n];
    for(int i=0;i<n;i++)
    {
        cout << "data[" << i + 1 << "]" << endl;
        cout << "enter name:" << endl;
        getline(cin,a[i].name);
        cout << "enter age:" << endl;
        cin >> a[i].age;
        cin.ignore();
        cout << "enter address:" << endl;
        getline(cin, a[i].address);
        cout << "enter email:" << endl;
        getline(cin,a[i].email);
        cout << "enter phone number:" << endl;
        getline(cin,a[i].phone);
        a[i].birthyear=a[i].cal();

    }

    fout.open("file.txt",ios::binary);
    fout.write((char*)a,sizeof(a));
    fout.close();

    fout2.open("file2.txt",ios::binary); // open fout2 before writing data
    fin.open("file.txt", ios::binary);
    int i=0;
    while (fin.read((char*)&a[i], sizeof(a[i]))) {
        fout2.write((char*)&a[i], sizeof(a[i]));
        cout << "name: " << a[i].name << endl;
        cout << "age: " << a[i].age << endl;
        cout << "birth year: " << a[i].cal() << endl;
        i++;
    }
    fin.close();
    fout2.close(); // close fout2 after writing data

    fin2.open("file2.txt", ios::binary); // open fout2 in input mode
    i = 0;
    while (fin2.read((char*)&a[i], sizeof(a[i]))) {
        cout << "name: " << a[i].name << endl;
        cout << "age: " << a[i].age << endl;
        cout << "birth year: " << a[i].cal() << endl;
        i++;
    }
    fin2.close(); // close fout2 after reading data
    return 0;
}