#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int> v;
    vector<int>::iterator i;
    cout<<"The capacity: "<<v.capacity()<<"\n";
    cout<<"The size: "<<v.size()<<"\n";
    v.push_back(1);
    cout<<"The capacity: "<<v.capacity()<<"\n";
    cout<<"The size: "<<v.size()<<"\n";
    v.push_back(2);
    cout<<"The capacity: "<<v.capacity()<<"\n";
    cout<<"The size: "<<v.size()<<"\n";
    v.push_back(3);
    cout<<"The capacity: "<<v.capacity()<<"\n";
    cout<<"The size: "<<v.size()<<"\n";
    v.push_back(4);
    cout<<"The capacity: "<<v.capacity()<<"\n";
    cout<<"The size: "<<v.size()<<"\n";
    v.push_back(5);
    cout<<"The capacity: "<<v.capacity()<<"\n";
    cout<<"The size: "<<v.size()<<"\n";
    for(i=v.begin();i<v.end();i++)
    {
        cout<<*i<<" ";
    }
}