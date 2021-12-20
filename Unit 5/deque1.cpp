#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> D={1,2,3,4,5};
    deque<int>::iterator i;
    cout<<"The elements of deque";
    for(i=D.begin();i!=D.end();i++)
    {
        cout<<*i<<" ";
    }
    D.push_back(10);
    cout<<"\nAfter Pushback: ";
    for(i=D.begin();i!=D.end();i++)
    {
        cout<<*i<<" ";
    }
    D.push_front(100);
    cout<<"\nAfter Pushfront: ";
    for(i=D.begin();i!=D.end();i++)
    {
        cout<<*i<<" ";
    }
    D.pop_front();
    cout<<"\nAfter Pop front: ";
    for(i=D.begin();i!=D.end();i++)
    {
        cout<<*i<<" ";
    }
    D.pop_back();
    cout<<"\nAfter Pop back: ";
    for(i=D.begin();i!=D.end();i++)
    {
        cout<<*i<<" ";
    }
}