#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    string line;
    fout.open("file.txt");
    while(fout)
    {
        getline(cin,line);
        if(line=="-1")
        break;
        fout<<line<<endl;
    }
    fout.close();
    ifstream fin;
    fin.open("file.txt");
    while(getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
}
