#include<iostream>
using namespace std;
class Student
{
    protected:
        int r;
    public:
        void get_nubmer(int x)
        {
            r = x;
        }
        void put_number()
        {
            cout<<"The roll number is: "<<r<<endl;
        }

};
class Test:public Student
{
    protected:
        int sub1,sub2;
    public:
        void get_marks(int x,int y)
        {
            sub1= x;
            sub2 = y;
        }
        void put_marks()
        {
            cout<<"The sub1: "<<sub1<<endl;
            cout<<"The sub2: "<<sub2<<endl;
        }

};

class Result:public Test
{
        int total;
    public:
        void display()
        {
            total = sub1+sub2;
            cout<<"Total Marks:"<<total<<endl;
        }

};
int main()
{
    Result R1;
    R1.get_nubmer(1);
    R1.put_number();
    R1.get_marks(89,98);
    R1.put_marks();
    R1.display();
}