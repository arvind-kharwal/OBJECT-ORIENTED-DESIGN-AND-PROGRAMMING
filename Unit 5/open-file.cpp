#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("games.txt");
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
    string line;
    ifstream fin;
    fin.open("games.txt");
    cout<<"\nThe games are: ";
    while(fin)
    {
        fin.getline(line,100);
    }
}