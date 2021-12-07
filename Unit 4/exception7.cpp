#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Enter the number: \n";
    cin>>i;
    try
    {
        if(i==1)
            throw 1;
        else if(i==2)
            throw 2;
        else
            throw 3;
    }
    catch(int e)
    {
        cout<<"All Exceptions handled\n ";
    }
}