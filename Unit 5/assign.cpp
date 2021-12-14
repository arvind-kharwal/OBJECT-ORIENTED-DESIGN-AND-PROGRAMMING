#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int> v;
    vector<int>::iterator i;
    v.assign(6,3);
    for(i=v.begin();i<v.end();i++)
        cout<<*i<<" ";

}