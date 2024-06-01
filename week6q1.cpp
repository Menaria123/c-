#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout("file9.txt");
    fout << "hello";
    fout.close();
}