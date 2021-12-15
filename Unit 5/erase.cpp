#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6};
    vector<int>::iterator i,j;
    cout<<"\nThe elements in vector v:\n";
    for(i=v.begin();i<v.end();i++)
    {
        cout<<*i<<" ";
    }
    i = v.end();
    v.erase(i);
    cout<<"\nThe elements in vector v after erase:\n";
    for(i=v.begin();i<v.end();i++)
    {
        cout<<*i<<" ";
    }

}