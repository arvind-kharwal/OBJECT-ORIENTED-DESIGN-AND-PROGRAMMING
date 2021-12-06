#include<iostream>
using namespace std;
int main()
{
    try
    {
        cout<<"Try Block\n";
        throw;
    }
    catch(int e)
    {
        cout<<"Exception Handled: "<<e<<endl;
    }
}