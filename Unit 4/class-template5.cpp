#include<iostream>
using namespace std;
template<class T1,class T2>
class Sum
{
        T1 a;
        T2 b;
    public:
        void getdata(T1,T2);
        void sum()
        {
            T2 s = a+b;
            cout<<"The sum is: "<<s<<endl;
        }
};
template<class T1,class T2>
void Sum<T1,T2>::getdata(T1 x,T2 y)
{
    a = x;
    b = y;
}

int main()
{
    Sum <int,int> S1;
    S1.getdata(10,30);
    S1.sum();

    Sum <int,float> S2;
    S2.getdata(12,21.1);
    S2.sum();
}