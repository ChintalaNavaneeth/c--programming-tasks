#include<iostream>
using namespace std;
void swap(int a, int b);
main()
{
	int a,b;
	cout<<"Enter two numbers ";
	cin>>a>>b;
	cout<<"numbers before swapping "<<a<<"  "<<b;
	swap(a,b);
}
	void swap(int a, int b)
	{
		int temp=0;
		temp=a;
		a=b;
		b=temp;
		cout<<"\nnumbers after swapping are "<<a<<"  "<<b;
	}
