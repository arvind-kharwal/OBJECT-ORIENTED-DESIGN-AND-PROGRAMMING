#include<iostream>
using namespace std;

class Example
{
        int a;
    public:
        void getdata(int x)
        {
            a = x;
        }
        
        void sum(Example,Example);
};

void Example::sum(Example e1,Example e2)
{
    int s = e1.a+e2.a;
    cout<<"The sum is: "<<s;
}

int main()
{
    Example E1,E2;
    E1.getdata(10);
    E2.getdata(20);
    E2.sum(E1,E2);
}