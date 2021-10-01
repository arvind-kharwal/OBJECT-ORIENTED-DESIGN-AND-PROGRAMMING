#include<iostream>
using namespace std;

class Complex
{
        float x;
        float y;
    public:
    void input(float real,float imag)
    {
        x = real;
        y = imag;
    }

    friend Complex sum(Complex,Complex);
    void show(Complex);
};

Complex sum(Complex C1,Complex C2)
{
    Complex C3;
    C3.x = C1.x+C2.x;
    C3.y = C1.y+C2.y;
    return(C3);
}

void Complex::show(Complex C)
{
    cout<<C.x<<"+j"<<C.y<<endl;
}

int main()
{
    Complex A,B,C;
    A.input(3.1,5.6);
    B.input(2.74,3.45);
    C = sum(A,B);
    A.show(A);
    B.show(B);
    C.show(C);
}