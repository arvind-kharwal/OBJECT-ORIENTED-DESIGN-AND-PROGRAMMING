#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    int a[] = {1,2,3,4,5};
    int b[] = {10,20,30,40,50};
    int res[5];
    transform(a,a+5,b,res,plus<int>());
    cout<<"\nThe array res: \n";
    for(int i=0;i<5;i++)
        cout<<res[i]<<" ";
}