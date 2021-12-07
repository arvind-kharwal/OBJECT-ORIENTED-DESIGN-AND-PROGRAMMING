#include<iostream>
using namespace std;
int main()
{
    int a,b;
    try
    {
        cout<<"Enter the number: \n";
        cin>>a>>b;
        if(b==0)
            throw 0;
        else
        cout<<"The divison is: "<<a/b<<endl;
    }
    catch(int e)
    {
        cout<<"Divison is not possible\n";
    }
    
}