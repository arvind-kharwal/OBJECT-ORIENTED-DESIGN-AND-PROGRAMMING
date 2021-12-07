#include<iostream>
using namespace std;
void display()
{
    throw 2;
}
int main()
{
    int i;
    cout<<"Enter the number: ";
    cin>>i;
    try
    {
        cout<<"Try Block\n";
        if(i==1)
            display();  
    }
    catch(int e)
    {
        cout<<"Exception Handled\n";
    }
}