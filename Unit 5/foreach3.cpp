#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
#include<vector>
void print(int x)
{
    cout<<x<<" ";
}
int main()
{
    vector<int> v={1,2,3,4,5};
    vector<int>::iterator i;
    for_each(v.begin(),v.end(),print);
}