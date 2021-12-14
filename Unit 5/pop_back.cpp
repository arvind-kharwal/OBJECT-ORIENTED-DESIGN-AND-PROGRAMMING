#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    vector<int>::iterator i;
    cout<<" The elements of vector V: \n";
    for(i=v.begin();i<v.end();i++)
        cout<<*i<<" ";
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"\nThe elements of vector V after pop back: \n";
    for(i=v.begin();i<v.end();i++)
        cout<<*i<<" ";
}