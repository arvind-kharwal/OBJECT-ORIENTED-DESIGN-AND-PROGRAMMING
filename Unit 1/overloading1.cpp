#include<iostream>
using namespace std;
void sum();
int sum(int,int);
int main()
{
    int a,b,r;
    sum();
    cout<<"Second function"<<endl;
    cout<<"Enter the number:";
    cin>>a>>b;
    r = sum(a,b);
    cout<<"The sum is: "<<r;
    return(0);
}

void sum()
{
    int x,y,s;
    cout<<"Enter the number:";
    cin>>x>>y;
    s = x+y;
    cout<<"The sum is:"<<s<<endl;
}

int sum(int x,int y)
{
    int a,b,s;
    a = x;
    b = y;
    s = a+b;
    return(s);
}