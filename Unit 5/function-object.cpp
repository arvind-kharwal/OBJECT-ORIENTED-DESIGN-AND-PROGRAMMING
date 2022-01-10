#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
    int a[] = {4,16,2,78,56,22,45};
    sort(a,a+7);
    for(int i=0;i<7;i++)
        cout<<a[i]<<" ";
}