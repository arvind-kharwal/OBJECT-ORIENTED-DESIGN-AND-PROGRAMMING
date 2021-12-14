#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    vector<int>::iterator i;
    cout<<"\nThe elements of vector V: ";
    for(i=v.begin();i<v.end();i++)
        cout<<*i<<" ";
    cout<<"\n Status: "<<v.empty()<<endl;
    if(v.empty()==1)
        cout<<"\nVector is empty";
    else
        cout<<"\nVector is not empty";
}