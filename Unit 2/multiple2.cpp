#include<iostream>
using namespace std;

class A
{
    public:
        void display()
        {
            cout<<"Display function from class A";
        }
};

class B
{
    public:
        void display()
        {
            cout<<"Display function from class B";
        }
};
class C:public A,public B
{
    public:
        void display()
        {
            cout<<"Display function from class C";
        }
};

int main()
{
    C C1;
    //C1.display();
    C1.A::display();
    C1.B::display();
    
}