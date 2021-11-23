#include<iostream>
using namespace std;
template <class T1,class T2>
void display(T1 x,T2 y)
{
    cout<<x<<" "<<y<<endl;
}
int main()
{
    display(10,20);
    display(12.3,34.3);
    display(10,12.49);
    display(34.5,"SRMIST");
    display("CSE","SRM");
}