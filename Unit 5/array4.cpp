#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,10> A;
    cout<<"\nThe size:  "<<A.size()<<endl; //
    cout<<"\nThe Max size:  "<<A.max_size()<<endl; // 
    cout<<"\nThe size of Array A:  "<<sizeof(A)<<endl; // 
    
}