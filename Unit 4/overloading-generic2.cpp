#include<iostream>
using namespace std;
template<class T>
void display(T x)
{
    cout<<"Generic function: "<<x<<endl;
}

void display(int y)
{
    cout<<"Normal function: "<<y<<endl;
}

int main()
{
    display(5);
    display(3.5);
    display("SRM");
}