#include<iostream>
using namespace std;
class ABC;  //forward declaration
class XYZ
{
        int a;
    public:
        void getdata(int x)
        {
            a = x;
        }

        friend void max(XYZ,ABC);
};

class ABC
{
        int b;
    public:
        void getdata(int y)
        {
            b = y;
        }
        friend void max(XYZ,ABC);
    
};

void max(XYZ m,ABC n)
{
    int s = m.a+n.b;
    cout<<s;
}

int main()
{
    ABC A;
    A.getdata(20);
    XYZ X;
    X.getdata(10);
    max(X, A);
}