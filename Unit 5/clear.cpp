#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6};
    vector<int>::iterator i;
    cout<<"\nThe elements in vector v:\n";
    for(i=v.begin();i<v.end();i++)
    {
        cout<<*i<<" ";
    }
    v.clear();
    cout<<"\nThe elements in vector v after clear():\n";
    for(i=v.begin();i<v.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\nThe size of vector v: "<<v.size()<<endl;
}