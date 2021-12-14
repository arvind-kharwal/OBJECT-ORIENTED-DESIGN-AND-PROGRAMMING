#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    vector<int>::iterator i;
    v.insert(v.end(),10);
    cout<<"\nThe elements of vector V after inserting element at begining: \n";
    for(i=v.begin();i<v.end();i++)
        cout<<*i<<" ";

}