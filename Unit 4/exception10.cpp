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
            throw 2.4;
        else if(i==3)
            throw 'a';
        else
            throw "SRM";
    }
    catch(int e)
    {
        cout<<"Integer exceptions handled\n";
    }
    catch(double e)
    {
        cout<<"Double exceptions handled\n";
    }
    catch(...)
    {
        cout<<"all exceptions handled\n";
    }
    

}