#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> v1={1,2,3,4,5};
    vector<int>::iterator i,j,k;
    j = v1.begin();
    cout<<"\nThe first element: "<<*j<<endl;
    k = v1.end();
    cout<<"\n The end of vector v1: "<<*k<<endl;
    cout<<"The last element: "<<v1.back()<<endl;
    for(i=v1.begin();i<v1.end();i++)
    {
        cout<<*i<<" ";
    }
}