#include<iostream>
using namespace std;
template<class T1,class T2>
class Example
{
        T1 a;
        T2 b;
    public:
        void getdata(T1,T2);
        void display()
        {
            cout<<a<<" "<<b<<endl;
        }

};
template<class T1,class T2>
void Example<T1,T2>::getdata(T1 x,T2 y)
{
    a = x;
    b = y;
}

int main()
{
    Example <int,int> E1;
    E1.getdata(10,20);
    E1.display();

    Example <int,float> E2;
    E2.getdata(10,20.5);
    E2.display();

    Example <int,string> E3;
    E3.getdata(10,"SRMIST");
    E3.display();
}