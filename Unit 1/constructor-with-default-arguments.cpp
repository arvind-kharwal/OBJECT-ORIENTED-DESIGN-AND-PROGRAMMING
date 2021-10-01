#include<iostream>
using namespace std;

class Default
{
        int a,b;
    public:
        Default(int,int);
        void display()
        {
            cout<<a<<" "<<b<<endl;
        }
};

Default::Default(int x,int y=20)
{
    a = x;
    b = y;
}

int main()
{
    Default D(100);
    D.display();
}