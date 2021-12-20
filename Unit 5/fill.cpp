#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
    array<int,5> A;
    array<int,5>::iterator i;
    A.fill(10);
    for(i=A.begin();i<A.end();i++)
    {
        cout<<*i<<" ";
    }
    
}