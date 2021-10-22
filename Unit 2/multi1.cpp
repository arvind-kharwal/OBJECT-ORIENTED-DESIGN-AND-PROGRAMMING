#include<iostream>
using namespace std;
class A
{
    protected:
        int a,b;
    public:
        void getdata(int x,int y)
        {
            a = x;
            b = y;
        }

};
class B:public A
{
   // protected:
    //    int a,b;
    public:
        void sum()
        {
            int c = a+b;
            cout<<"The sum is "<<c<<endl;
        }
     /*   void getdata(int x,int y)
        {
            a = x;
            b = y;
        }*/

};

class C:public B
{
     // protected:
    //    int a,b;
    public:
     /*   void getdata(int x,int y)
        {
            a = x;
            b = y;
        }
         void sum()
        {
            int c = a+b;
            cout<<"The sum is "<<c<<endl;
        }*/
        void mul()
        {
            int m = a*b;
             cout<<"The multiplication is "<<m<<endl;
        }
};
int main()
{
    C C1;
    C1.getdata(10,20);
    C1.sum();
    C1.mul();
}


