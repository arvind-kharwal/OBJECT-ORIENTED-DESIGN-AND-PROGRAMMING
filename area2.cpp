#include<iostream>
using namespace std;
class Area
{
        int r;
    public:
        void getdata(int);
        void show();
};

void Area::getdata(int x)
{
    r = x;
}
void Area::show()
{
    float a;
    a=3.14*r*r;
    cout<<"The area is: "<<a;
}

int main()
{
    Area A1;
    int r1;
    cout<<"Enter the radius: ";
    cin>>r1;
    A1.getdata(r1);
    A1.show();
}