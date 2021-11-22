#include<iostream>
using namespace std;
template<class T>
T sum(T a, T b)
{
    T s = a+b;
    return(s);
}

int main()
{
    int r1 =sum(10,20);
    cout<<r1<<endl;
    float r2 =sum(10.5,20.7);
    cout<<r2<<endl;
    // string s = sum("SRM","India");
    // cout<<s;
}