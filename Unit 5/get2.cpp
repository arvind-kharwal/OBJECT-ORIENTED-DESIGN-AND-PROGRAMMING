#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the text: ";
    ch = cin.get();
    while(ch!='\n')
    {
        cout.put(ch);
        ch = cin.get();
    }
}