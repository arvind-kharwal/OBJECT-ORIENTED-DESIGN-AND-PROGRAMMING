#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the text: ";
    cin.get(ch);
    while(ch!='\n')
    {
        cout.put(ch);
        cin.get(ch);
    }
}