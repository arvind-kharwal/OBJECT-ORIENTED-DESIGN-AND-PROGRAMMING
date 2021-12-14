#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int> v;
    vector<int>::iterator i;
    cout<<"The size of V: "<<v.size();
    cout<<"\nThe size of V: "<<v.max_size();
}