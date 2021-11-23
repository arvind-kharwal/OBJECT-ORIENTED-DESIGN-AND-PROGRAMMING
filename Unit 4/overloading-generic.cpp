#include<iostream>
using namespace std;
template<class T>
T sum(T x,T y)
{
    T s = x+y;
    return(s);
}
template<class T>
T sum(T x, T y, T z)
{
    T s = x+y+z;
    return(s);
}
int main()
{
    int r1 = sum(10,20);
    cout<<"The sum is: "<<r1<<endl;
    int r2 = sum(10,20,30);
    cout<<"The sum is: "<<r2<<endl;
}