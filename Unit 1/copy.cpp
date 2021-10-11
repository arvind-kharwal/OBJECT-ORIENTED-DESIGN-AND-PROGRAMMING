#include<iostream>
using namespace std;

class Copy
{
        int a;
    public:
        Copy(int);
        void display()
        {
            cout<<"The a: "<<a<<endl;
        }
};
Copy::Copy(int x)
{
    a = x;
}

int main()
{
    Copy C1(10);
    C1.display();
    //Copy C2=C1;
    Copy C2(C1);
    C2.display();
}