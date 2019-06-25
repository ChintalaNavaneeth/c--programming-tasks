#include<iostream>
using namespace std;
main()
{
	int count=0;
	char a[50], b[50];
	cout<<"Input the first string: ";
	cin>>a;
	cout<<"Input the second string: ";
	cin>>b;
	for(int i=0;a[i]!='\0';i++)
		{
			for(int j=0;b[j]!='\0'; j++)
			{
				if(a[i]==b[j])
				{
					count++;
					
				}
			}
			
		}
		if(count>0)
		{
			cout<<a<<" and "<<b<<" are anagram.";
		}
		else
		{
			cout<<a<<" and "<<b<<" are not anagram.";
		}
}
	
