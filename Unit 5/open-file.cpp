#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("games.txt",ios::out);
    fout<<"Cricket\n";
    fout<<"Footbal\n";
    fout<<"Badminton\n";
    fout<<"Table Tennis\n";
    fout.close();
    fout.open("branches.txt");
    fout<<"CSE\n";
    fout<<"IT\n";
    fout<<"ME\n";
    fout<<"CE\n";
    fout.close();
    char line[100];
    ifstream fin;
    fin.open("games.txt",ios::in);
    cout<<"\nThe games are: ";
    while(fin)
    {
        fin.getline(line,100);
        cout<<line<<"\n";
    }
    fin.close();
    fin.open("branches.txt");
    cout<<"\nThe Branches are: ";
    while(fin)
    {
        fin.getline(line,100);
        cout<<line<<"\n";
    }
    fin.close();
}