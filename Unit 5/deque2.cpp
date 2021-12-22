#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> D={1,2,3,4,5};
    deque<int>::iterator i;
    cout<<"The elements of deque: ";
    for(i=D.begin();i!=D.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<"\nThe size is: "<<D.size()<<endl;
    cout<<"\nThe max size is: "<<D.max_size()<<endl;
}