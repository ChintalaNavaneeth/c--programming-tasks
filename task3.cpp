#include<iostream>
using namespace std;
main()
{
	int year;
	cout<<"Enter year to check it whether it is leap or not ??\n";
	cin>>year;
	if(year%4==0 && year%100!=0 || year%400==0 )
		{
	cout<<year<<" is a leap year";				
	}
	else
	{
		cout<<year<<" is not a leap year";
	}
}
