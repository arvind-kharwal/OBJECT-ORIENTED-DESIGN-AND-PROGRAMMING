#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> L = {1,2,3,4,5};
    list<int>::iterator i;
    cout<<"\nThe elements in list: ";
    for(i=L.begin();i!=L.end();i++)
    {
        cout<<*i<<" ";
    }
    L.push_front(10);
    cout<<"\nThe elements after pushfront: ";
    for(i=L.begin();i!=L.end();i++)
    {
        cout<<*i<<" ";
    }
    L.pop_front();
    cout<<"\nThe elements after popfront: ";
    for(i=L.begin();i!=L.end();i++)
    {
        cout<<*i<<" ";
    }
    

}