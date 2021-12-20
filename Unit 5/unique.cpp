#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> L1= {1,2,3,4,5,4,5,6,7};
    list<int>::iterator i;
    cout<<"\nThe elements in list L1: ";
    for(i=L1.begin();i!=L1.end();i++)
    {
        cout<<*i<<" ";
    }
    unique(L1.begin(),L1.end());
    cout<<"\nThe elements in list L1 : ";
    for(i=L1.begin();i!=L1.end();i++)
    {
        cout<<*i<<" ";
    }
}