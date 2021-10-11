#include<iostream>
using namespace std;

/* data type & reference-variable = varibale-name; */

int main()
{
    int m = 10;
    int & n = m;
    cout<<n<<" "<<m<<endl;
    n = n+10;
    cout<<n<<" "<<m<<endl;



}