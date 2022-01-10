#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
#include<vector>
void fun(int x)
{
    cout<<x<<" ";
}
int main()
{
    int a[] = {1,2,3,4,5};
    for_each(a,a+5,fun);
}