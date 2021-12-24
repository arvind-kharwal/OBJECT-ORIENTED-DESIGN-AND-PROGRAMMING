#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> V={1,3,6,6,6,77,4,7,8,9,10};
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int num = count(V.begin(),V.end(),n);
    cout<<"\nThe count of "<<n<<" is "<<num<<endl;
}