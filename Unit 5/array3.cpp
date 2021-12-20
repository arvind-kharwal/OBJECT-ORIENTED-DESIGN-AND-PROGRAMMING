#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
    array<int,5> A={1,2,3,4,5};
    cout<<"The element"<<A[2]<<endl;    
    cout<<"First element: "<<A.front()<<endl;
    cout<<"Last element: "<<A.back()<<endl;    
}