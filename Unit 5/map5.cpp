#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> M;
    map<int,string>::iterator i;
    M.insert(pair<int,string>(1,"Amit"));
    M.insert(pair<int,string>(2,"Arvind"));
    M.insert(pair<int,string>(3,"Sachin"));
    cout<<"The elements of Map M: \n";
    for(i=M.begin();i!=M.end();i++)
    {
        cout<<(*i).first<<":"<<(*i).second<<endl;
    }
}