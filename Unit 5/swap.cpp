#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    cout<<"\nThe two numbers before swapping: "<<a<<" "<<b;
    swap(a,b);
    cout<<"\nThe two numbers after swapping: "<<a<<" " <<b;
}