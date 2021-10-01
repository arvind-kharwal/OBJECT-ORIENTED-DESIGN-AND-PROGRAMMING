#include<iostream>
using namespace std;

class Overloading
{
        int a,b;
    public:
        void sum();
        int sum(int,int);
};

void Overloading::sum()
{   
    cout<<"Enter the two numbers:";
    cin>>a>>b;
    int s = a+b;
    cout<<"The sum is:"<<s;
}

int Overloading::sum(int x,int y)
{
    a = x;
    b = y;
    int s = a+b;
    return(s);
}

int main()
{
    Overloading O1,O2;
    int m,n;
    O1.sum();
    cout<<"\nThe second function";
    cout<<"\nEnter the two numbers:";
    cin>>m>>n;
    int r = O2.sum(m,n);
    cout<<"The sum is:"<<r;
    return(0);
}