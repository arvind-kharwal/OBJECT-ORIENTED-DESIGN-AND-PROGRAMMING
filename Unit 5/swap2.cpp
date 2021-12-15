#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1={1,2,3,4,5};
    vector<int> v2={10,20,30,40,50};
    vector<int>::iterator i;
    cout<<"\nThe elements in vector v1 before swapping:\n";
    for(i=v1.begin();i<v1.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\nThe elements in vector v2 before swapping:\n";
    for(i=v2.begin();i<v2.end();i++)
    {
        cout<<*i<<" ";
    }
    swap(v1,v2);
    cout<<"\nThe elements in vector v1 after swapping:\n";
    for(i=v1.begin();i<v1.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\nThe elements in vector v2 after swapping:\n";
    for(i=v2.begin();i<v2.end();i++)
    {
        cout<<*i<<" ";
    }
}