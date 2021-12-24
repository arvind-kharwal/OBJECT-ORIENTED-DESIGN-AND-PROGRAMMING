#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<int,string> M={{1,"Hello"},{3,"World"},{2,"India"},{14,"C++"},{5,"Programming"}};
    multimap<int,string>:: iterator i;
    cout<<"\nThe elements of multimap M: \n";
    for(i=M.begin();i!=M.end();i++)
    {
        cout<<i->first<<":"<<i->second<<endl;
    }
    // multimap<int,string> M1(M);
    multimap<int,string> M1(M.begin(),M.end());
    cout<<"\nThe elements of multimap M1: \n";
    for(i=M1.begin();i!=M1.end();i++)
    {
        cout<<i->first<<":"<<i->second<<endl;
    }
    }