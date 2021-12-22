#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int> M;
    map<int,int>::iterator i;
    M.insert(pair<int,int>(1,10));
    M.insert(pair<int,int>(2,20));
    M.insert(pair<int,int>(4,40));
    M.insert(pair<int,int>(3,30));
    cout<<"The elements of Map M: \n";
    for(i=M.begin();i!=M.end();i++)
    {
        cout<<(*i).first<<":"<<(*i).second<<endl;
    }
}