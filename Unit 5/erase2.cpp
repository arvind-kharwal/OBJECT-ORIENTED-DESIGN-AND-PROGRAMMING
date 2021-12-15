#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    vector<int>::iterator i;
    cout<<"\nThe elements in vector v:\n";
    for(i=v.begin();i<v.end();i++)
    {
        cout<<*i<<" ";
    }
    for(i=v.begin();i<v.end();i++)
    {
        if(*i%2==0)
            v.erase(i);
    }
    cout<<"\nThe elements in vector v after erasing even elements:\n";
    for(i=v.begin();i<v.end();i++)
    {
        cout<<*i<<" ";
    }
}