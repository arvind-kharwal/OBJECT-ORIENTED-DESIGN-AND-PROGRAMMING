#include<iostream>
using namespace std;
template<class T>
void display(T x)
{
    cout<<x<<endl;
}
int main()
{
    display(5);
    display(3.4);
    display("SRMIST");
}