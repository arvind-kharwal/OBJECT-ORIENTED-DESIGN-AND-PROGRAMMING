#include<iostream>
using namespace std;

class Multiple
{
        int a,b;
    public:
        Multiple()
        {
            cout<<"Enter the two values:";
            cin>>a>>b;
        }
        Multiple(int x,int y)
        {
            a = x;
            b = y;
        }
        Multiple(Multiple & M)
        {
            a = M.a;
            b = M.b;
        }
        void display()
        {
            cout<<"a:"<<a<<"b: "<<b<<endl;
        }
};

int main()
{
    Multiple M1;
    M1.display();
    Multiple M2(10,20);
    M2.display();
    Multiple M3(M1);    // copy constructor 
    M3.display();

}
