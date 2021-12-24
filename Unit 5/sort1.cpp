#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> V={10,3,4,61,56,77,41,7,8,9,101};
    vector<int>::iterator i;
    sort(V.begin(),V.end());
    for(i=V.begin();i!=V.end();i++)
    {
        cout<<*i<<" ";
    }
}