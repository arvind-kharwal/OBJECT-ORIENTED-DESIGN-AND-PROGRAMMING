#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    vector<int>::iterator i,j;
    for(i=v.begin();i<v.end();i++)
        cout<<*i<<" ";
    i = v.begin();
    j = v.end();
    cout<<"\nThe distance: "<<distance(i,j); 
}