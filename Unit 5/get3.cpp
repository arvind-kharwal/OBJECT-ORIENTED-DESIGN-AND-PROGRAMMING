#include<iostream>
using namespace std;
int main()
{
    char ch;
    int count = 0;
    cout<<"Enter the character: ";
    cin.get(ch);
    while(ch!='\n')
    {
        cout.put(ch);
        count++;
        cin.get(ch);
    }
    cout<<"\nThe number of characters: "<<count<<"\n";
}