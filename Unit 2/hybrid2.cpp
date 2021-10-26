#include<iostream>
using namespace std;
class A
{
    public:
        int a;
        
};
class B:virtual public A
{
    public:
        int b;
       

};
class C:virtual public A
{
    public:
        int c;

};
class D:public B,public C
{
    public:
        int d;
};

int main()
{
    D D1;
    //D1.a=10;
    //cout<<D1.a;
    cout<<sizeof(D1);
    
}