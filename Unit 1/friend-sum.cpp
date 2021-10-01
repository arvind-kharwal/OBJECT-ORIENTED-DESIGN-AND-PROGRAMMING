#include<iostream>
using namespace std;
class Item
{
        int a,b;
    public:
        void getdata(int x,int y)
        {
            a = x;
            b = y;
        }
        friend void sum(Item,Item);
};

void sum(Item i1,Item i2)
{
    int s = i1.a+i2.b;
    cout<<"\n The sum is: "<<s;
}

int main()
{
    Item A;
    A.getdata(100,300);
    sum(A,A);

}