#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> L1= {1,2,3,4,5};
    list<int>::iterator i;
    cout<<"\nThe elements in list L1: ";
    for(i=L1.begin();i!=L1.end();i++)
    {
        cout<<*i<<" ";
    }
    L1.remove(3);
    cout<<"\nThe elements in list L1 : ";
    for(i=L1.begin();i!=L1.end();i++)
    {
        cout<<*i<<" ";
    }
}