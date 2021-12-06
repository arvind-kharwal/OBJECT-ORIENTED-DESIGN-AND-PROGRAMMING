#include<iostream>
using namespace std;
int main()
{
    cout<<"Welcome in main function\n";
    try
    {
        cout<<"Try Block\n";
        throw 1;
        cout<<"After Throw\n";
    }
    catch(double e)
    {
        cout<<"Double Exception Handled: "<<e<<endl;
    }
    catch(int e)
    {
        cout<<"Integer Exception Handled: "<<e<<endl;  
    }
    cout<<"End of main function\n";
}