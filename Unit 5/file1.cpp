#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string name = "Arvind Kumar";
    ofstream fout("list.txt");
    fout<<name;
    fout.close();
}