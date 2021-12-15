#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
    array<int,5> A={10,22,3,4,5};
    array<int,5>::iterator i;
    cout<<"The size of array A: "<<A.size()<<endl;
    for(i=A.begin();i<A.end();i++)
    {
        cout<<*i<<" ";
    }
    A.sort();
}