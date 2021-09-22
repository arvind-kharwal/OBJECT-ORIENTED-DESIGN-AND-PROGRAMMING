#include<iostream>
using namespace std;
class Employee
{
        int a,b;
    public:
        void getdata();
        void display();
};

void Employee::getdata()
{
    cout<<"Enter the numbers: ";
    cin>>a>>b;
}

void Employee::display()
{
    cout<<a<<endl<<b;
    cout<<"\n";
}

int main()
{
    Employee E[2];
    for(int i=0;i<2;i++)
    {
        E[i].getdata();
    }
    
     for(int i=0;i<2;i++)
    {
        E[i].display();
    }
}