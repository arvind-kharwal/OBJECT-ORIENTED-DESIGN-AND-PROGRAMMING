#include<iostream>
using namespace std;

class Example
{
    int a,b;
    public:
        Example()
        {
            cout<<"Default Constructor of Example class"<<endl;
        }
        Example(int x,int y)
        {
            cout<<"Parameterized Constructor of Example class"<<endl;
            a = x;
            b = y;
        }
        void display1()
        {
            cout<<a<<" "<<b<<endl;
        }
};
class Sample:public Example
{
    int m,n;
    public:
        Sample()
        {
            cout<<"Default Constructor of class Sample"<<endl;
        }
        Sample(int x,int y)
        {
             cout<<"Parameterized Constructor of Sample class"<<endl;
            m = x;
            n = y;
        }
        void display2()
        {
            cout<<m<<" "<<n<<endl;
        }
};

int main()
{
    Sample S;
    Sample S1(100,200);
    S1.display2();
}