#include<iostream>
using namespace std;

class A
{
    public:
    
        void f1(int x)
        {
            cout<<"f1 from class A"<<endl;
            cout<<x<<endl;
        }
    
};

class B:public A
{
    public:
        void f1(float y)
        {
            cout<<"f1 from class B"<<endl;
            cout<<y<<endl;
        }
        /*
        void f1(int x)
        {
            cout<<"f1 from class ABC"<<endl;
            cout<<x<<endl;
        }*/
};

int main()
{
    B B1;
    //B1.f1(2.5);
    B1.f1(2);
}