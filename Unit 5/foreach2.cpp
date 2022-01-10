#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
#include<vector>
void even(int x)
{
    if(x%2==0)
        cout<<x<<" ";
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    for_each(a,a+10,even);
}