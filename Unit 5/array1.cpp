#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5> A={{1,2,3,4,5}};
    array<int,5>::iterator i;
    cout<<"The size of array A: "<<A.size()<<endl;
    for(i=A.begin();i<A.end();i++)
    {
        cout<<*i<<" ";
    }
}