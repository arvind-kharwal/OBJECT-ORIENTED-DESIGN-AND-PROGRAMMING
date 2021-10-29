#include<iostream>
using namespace std;

class Example
{
    public:
        // Example()
        // {
        //     cout<<"Default Constructor of class Example"<<endl;
        // }
        void display()
        {
            cout<<"Display from base";
        }
};
class Sample:public Example
{
    public:
        Sample()
        {
            cout<<"default class Sampler"<<endl;
        }
};

int main()
{
    Sample S;
}