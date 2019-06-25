#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements in the array\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
		for(int i=0;i<n;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					if(a[i]>a[j])
					{
						int temp=0;
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;	
					}	
				}
			}
					cout<<"Elements in ascending order \n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"  ";
	}
}
	
