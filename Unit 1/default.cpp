#include<iostream>
using namespace std;

class Default
{
        int a,b;
    public:
        Default(int x,int y = 20)
        {
            a = x;
            b = y;
        }
        void display()
        {
            cout<<a<<" "<<b<<"\n";
        }
};

int main()
{
    Default D1(100,200);
    D1.display();
    Default D2(500);
    D2.display();
}
