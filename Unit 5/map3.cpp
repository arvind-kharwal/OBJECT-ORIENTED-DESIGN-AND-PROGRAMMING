#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int> M;
    map<int,int>::iterator i;
    M.insert({1,20});
    M.insert({3,20});
    M.insert({3,30});
    M.insert({6,60});
    cout<<"The elements of Map M: \n";
    for(i=M.begin();i!=M.end();i++)
    {
        cout<<(*i).first<<":"<<(*i).second<<endl;
    }
}