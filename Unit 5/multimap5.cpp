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
    M.erase(14);
    cout<<"\nThe elements of multimap M after erasing key=14: \n";
    for(i=M.begin();i!=M.end();i++)
    {
        cout<<i->first<<":"<<i->second<<endl;
    }
    }