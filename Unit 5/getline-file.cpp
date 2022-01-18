
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    string name;
    ifstream fin("list.txt");
    getline(fin,name);
    cout<<"The name is: "<<name<<"\n";
    fin.close();

}