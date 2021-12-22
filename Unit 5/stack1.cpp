#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> S;
    S.push(1);
    S.push(2);
    S.push(3);
    cout<<"The elements of stack S: \n";
    while(!S.empty())
    {
        cout<<S.top()<<" ";
        S.pop();
    }
}