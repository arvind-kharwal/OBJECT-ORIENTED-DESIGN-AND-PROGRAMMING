#include<iostream>
using namespace std;

class Parameter
{
            int a,b;
        public:
            Parameter(int,int);
            void display();
};

Parameter::Parameter(int x, int y)
{
    a = x;
    b = y;
}

void Parameter::display()
{
    cout<<a<<endl<<b;
}

int main()
{
    Parameter P(10,20);
    P.display();
}