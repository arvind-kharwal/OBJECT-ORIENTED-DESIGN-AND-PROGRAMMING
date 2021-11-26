#include<iostream>
using namespace std;
template<class T>
class Example
{
        T a,b;
    public:
        Example(T x, T y)
        {
            a = x;
            b = y;
        }
        void display()
        {
            cout<<"The a & b: "<<a<<" "<<b<<endl;
        }

};
int main()
{
    Example <int> E1(10,20);
    E1.display();

    Example <float> E2(1.1,2.2);
    E2.display();

    Example <string> E3("SRM","India");
    E3.display();
}