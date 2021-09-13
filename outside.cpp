#include<iostream>
using namespace std;

class Example
{
	private:
		int a;
		float b;
	public:
		void getdata();
		void display();
};

void Example::getdata()
{
	cout<<"Enter the numbers: ";
	cin>>a>>b;
}

void Example::display()
{
	cout<<"The numbers are: "<<a<<endl<<b;
}

int main()
{
	Example E;
	E.getdata();
	E.display();
}