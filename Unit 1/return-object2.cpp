#include<iostream>
using namespace std;

class Add
{
        int a;
        int b;
    public:
    void input(int x,int y)
    {
        a = x;
        b = y;
    }

    friend Add sum(Add,Add);
    void show(Add);
};

Add sum(Add C1,Add C2)
{
    Add C3;
    C3.a = C1.a+C2.a;
    C3.b = C1.b+C2.b;
    return(C3);
}

void Add::show(Add C)
{
    cout<<C.a<<"\t"<<C.b<<endl;
}

int main()
{
    Add A,B,C;
    A.input(3.1,5.6);
    B.input(2.74,3.45);
    C = sum(A,B);
    A.show(A);
    B.show(B);
    C.show(C);
}