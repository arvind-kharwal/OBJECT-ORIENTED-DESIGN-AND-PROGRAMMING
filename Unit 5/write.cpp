#include<iostream>
using namespace std;
int main()
{
    char s[20];
    cout<<"Enter the string: ";
    cin.getline(s,20);
    cout<<"\nThe string is: ";
    cout.write(s,5);
}
