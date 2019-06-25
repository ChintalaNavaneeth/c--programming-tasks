#include<iostream>
using namespace std;
main()
{
	int n,sum=0;
	cout<<"Enter size of the array: ";
	cin>>n;
	int a[n];
	cout<<"Enter elements in the arrary\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<"Sum of the elements in the array are "<<sum;
}
