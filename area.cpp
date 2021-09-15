#include<iostream>
using namespace std;
class Area
{
        int r;
    public:
        void getdata();
        void show();
};

void Area::getdata()
{
    cout<<"Enter the radius: ";
    cin>>r;
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
    A1.getdata();
    A1.show();
}