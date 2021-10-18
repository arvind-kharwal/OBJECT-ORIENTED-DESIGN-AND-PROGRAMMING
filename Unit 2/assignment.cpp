#include<iostream>
using namespace std;

class Example
{
        int a,b;
    public:
        Example()
        {

        }
        Example(int x,int y)
        {
            a = x;
            b = y;
        }
        void display()
        {
            cout<<a<<" "<<b<<endl;
        }
        void operator=(Example &E)
        {
            a = E.a;
            b = E.b;
        }
};

int main()
{
    Example E1;
    Example E2(10,20);
    E1 = E2;
    E1.display();
}