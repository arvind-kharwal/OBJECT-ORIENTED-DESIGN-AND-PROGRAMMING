#include<iostream>
using namespace std;

class Rev
{
        long int n;
    public:
        void getdata();
        void display();
};

void Rev::getdata()
{
    cout<<"Enter the number: ";
    cin>>n;
}

void Rev::display()
{
    int i=0;
    int revnum = 0;
    while(n>0)
    {
        int a = n%10;
        revnum = revnum*10+a;
        n=n/10;
    }
    cout<<"The sum of digits is: "<<revnum;
}

int main()
{
    Rev R;
    R.getdata();
    R.display();
}