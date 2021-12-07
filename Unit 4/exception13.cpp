#include<iostream>
using namespace std;
void display(int x)
{
    cout<<"Display function\n";
    try
    {
        if( x==1)
            throw 1;
        else if(x==2)
            throw 2.4;
        else
            throw 'a';
    }
    catch(...)
    {
        cout<<"All exceptions handled\n";
    }
cout<<"End of Display function\n";
}
int main()
{
    display(1);
    display(3);
}