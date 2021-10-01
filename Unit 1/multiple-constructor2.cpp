#include<iostream>
using namespace std;

class Multiple
{
        int a,b;
    public:
        Multiple();
        Multiple(int,int);
        Multiple(Multiple & m)
        {
            a = m.a;
            b = m.b;

        }
        void display()
        {
            cout<<a<<" "<<b<<endl;
        }

};

Multiple::Multiple()
{
    cout<<"Enter the two numbers:";
    cin>>a>>b; 
}
Multiple::Multiple(int x,int y)
{
    a = x;
    b = y;
}

int main()
{
    Multiple M1;
    M1.display();
    Multiple M2(10,20);
    M2.display();
    Multiple M3(M1);
}