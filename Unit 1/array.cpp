#include<iostream>
using namespace std;

class Student
{
        int marks[5];
    public:
        void getmarks();
        void totalmarks();
};

void Student:: getmarks()
{   
    for(int i=0;i<5;i++)
    {
        cout<<"\n Enter the Marks: ";
        cin>>marks[i];
    }
}

void Student::totalmarks()
{
    int t =0;
    for(int i=0;i<5;i++)
       t = t+marks[i]; 
    cout<<t;
}

int main()
{
    Student S1;
    S1.getmarks();
    S1.totalmarks();
    return(0);
}