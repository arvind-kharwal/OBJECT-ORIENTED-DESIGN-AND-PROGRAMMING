#include<iostream>
using namespace std;

class A
{
    protected:
        int a;
    public:
       void get_a(int x)
        {
            a = x;
        }
};

class B
{
    protected:
        int b;
    public:
        void get_b(int y)
        {
            b = y;
        }
};
class C:public A,public B
{
    public:
        void sum()
        {
            cout<<"a: "<<a<<endl;
            cout<<"b: "<<b<<endl;
            int s = a+b;
            cout<<"The sum is: "<<s<<endl;
        }
};

int main()
{
    C C1;
    C1.get_a(10);
    C1.get_b(20);
    C1.sum();
}