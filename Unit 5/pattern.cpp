#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    char s[] = "Programming";
    int n = strlen(s);
    int i;
    for(i=1;i<n;i++)
    {
        cout.write(s,i);
        cout<<"\n";
    }
    for(i=n;i>0;i--)
    {
        cout.write(s,i);
        cout<<"\n";
    }

}