#include<iostream>
using namespace std;
class Add
{
    private:
        int a,b;
    public:
        void getdata(int,int);
        void display();
};

void Add::getdata(int x,int y)
{
    a = x;
    b = y;
}

void Add::display()
{
    int s;
    s = a+b;
    cout<<"\n The sum is: "<<s;
}

int main()
{
   Add A1; 
   int x,y;
   cout<<"\n Enter the two: ";
   cin>>x>>y;
   A1.getdata(x,y);
   A1.display();

}