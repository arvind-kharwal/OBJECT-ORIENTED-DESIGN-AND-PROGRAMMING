#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int square(int x)
{
    x = x*x;
    return(x);
}
int main()
{
    int a[] = {1,2,3,4,5};
    int res[5];
    transform(a,a+5,res,square);
    for(int i = 0;i<5;i++)
        cout<<res[i]<<" ";
}