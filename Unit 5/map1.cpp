#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int> M={{1,10},{2,20},{3,30}};
    map<int,int>::iterator i;
    cout<<"The elements of Map M: \n";
    for(i=M.begin();i!=M.end();i++)
    {
        cout<<(*i).first<<":"<<(*i).second<<endl;
    }
}