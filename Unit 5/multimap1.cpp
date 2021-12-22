#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<int,char> M={{1,'a'},{2,'b'},{3,'c'}};
    multimap<int,char>:: iterator i;
    cout<<"The elements of multimap M: \n";
    for(i=M.begin();i!=M.end();i++)
    {
        cout<<(*i).first<<":"<<(*i).second<<endl;
    }
}