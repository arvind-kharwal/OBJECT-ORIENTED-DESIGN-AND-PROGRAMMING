#include<iostream>
#include<fstream>
#include<string.h>
#include<ostream>
using namespace std;
int main()
{
    char s[100];
    cout<<"Enter the string:";
    cin>>s;
    int len = strlen(s);
    fstream fout;
    fout.open("put.txt");
    for(int i=0;i<len;i++)
    {
        fout.put(s[i]);
    }
    fout.close();
    //fout.seekg(0);
    fstream fin;
    fin.open("put.txt");
    char ch;
    while(fout)
    {
        fout.get(ch);
        cout<<ch;
    }
    fout.close();
}