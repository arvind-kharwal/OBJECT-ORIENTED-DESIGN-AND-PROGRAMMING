#include<iostream>
using namespace std;

class Add
{
        int a;
    public:
        void getdata(int x)
        {
            a = x;
        }

        friend Add sum(Add,Add);
        void display(Add);

};

Add sum(Add a1,Add a2)
{
    Add S1;
    S1.a = a1.a+a2.a;
    return(S1);
}

void Add::display(Add S)
{
    cout<<S.a;
}

int main()
{
    Add A1,A2,R;
    A1.getdata(10);
    A2.getdata(20);
    R = sum(A1,A2);
    A1.display(A1);
    A2.display(A2);
    R.display(R);

}