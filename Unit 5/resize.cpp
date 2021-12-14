#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    vector<int>::iterator i;
    cout<<"The size of V: "<<v.size();
    cout<<"\nThe elements of vector V: ";
    for(i=v.begin();i<v.end();i++)
        cout<<*i<<" ";
    v.resize(20);
    cout<<"\nThe size of V: "<<v.size();
    cout<<"\nThe elements of vector V after resizing: ";
    for(i=v.begin();i<v.end();i++)
        cout<<*i<<" ";
    
}