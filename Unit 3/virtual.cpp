#include<iostream>
using namespace std;
class A
{
    public:
       virtual void display()
        {
            cout<<"Display function from class A"<<endl;
        }
};

class B:public A
{
    public:
        void display()
        {
            cout<<"Display function from class B"<<endl;
        }
};
int main()
{
  
    A *P,A1;
    P = &A1;
    P->display();
    B B1;
    P = &B1;
    P->display();
}