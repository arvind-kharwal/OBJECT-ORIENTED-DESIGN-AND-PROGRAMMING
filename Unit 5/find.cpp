#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> V={1,3,6,23,56,77};
    vector<int>::iterator i;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    i = find(V.begin(),V.end(),n);
    if(i!=V.end())
        cout<<n<<" is found at index: "<<i-V.begin()<<endl;
    else
        cout<<n<<" is not found"<<endl;
}