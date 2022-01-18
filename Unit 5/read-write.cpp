#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    string name;
    int cost;
    ofstream fout("data.txt");
    cout<<"Enter the name: ";
    cin>>name;
    fout<<name<<"\n";
    cout<<"Enter the cost: ";
    cin>>cost;
    fout<<cost<<"\n";
    fout.close();
    ifstream fin("data.txt");
    fin>>name;
    fin>>cost;
    cout<<"\nThe name is: "<<name<<"\n";
    cout<<"\nThe cost is: "<<cost<<"\n";
    fin.close();
}