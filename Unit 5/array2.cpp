#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<string,3> A={string("Arvind"),("CSE"),("India")};
    array<string,3>::iterator i;
    cout<<"The size of array A: "<<A.size()<<endl;
    for(i=A.begin();i!=A.end();i++)
    {
        cout<<*i<<" ";
    }
}