#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> L1= {1,2,3,4,5};
    list<int> L2= {10,20,30,40,50};
    list<int>::iterator i;
    cout<<"\nThe elements in list L1: ";
    for(i=L1.begin();i!=L1.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\nThe elements in list L2: ";
    for(i=L2.begin();i!=L2.end();i++)
    {
        cout<<*i<<" ";
    }
    L1.merge(L2);
    cout<<"\nThe elements in list L1 after Merge: ";
    for(i=L1.begin();i!=L1.end();i++)
    {
        cout<<*i<<" ";
    }
}