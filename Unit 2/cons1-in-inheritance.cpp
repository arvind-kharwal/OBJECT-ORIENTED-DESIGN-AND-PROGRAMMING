#include<iostream>
using namespace std;

class Example
{
    public:
        Example()
        {
            cout<<"Default Constructor of class Example"<<endl;
        }
};
class Sample:public Example
{
    public:
        Sample()
        {
            cout<<"Default Constructor of class Sample"<<endl;
        }
};

int main()
{
    Sample S;
}