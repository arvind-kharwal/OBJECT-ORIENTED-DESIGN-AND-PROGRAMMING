#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> V1={10,3,4,61,56};
    vector<int> V2={77,41,7,8,9};
    vector<int> V3(10);
    vector<int>::iterator i;
    merge(V1.begin(),V1.end(),V2.begin(),V2.end(),V3.begin());
    for(i=V3.begin();i!=V3.end();i++)
    {
        cout<<*i<<" ";
    }
}