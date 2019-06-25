#include<iostream>
using namespace std;
main()
{
int days,year=0,week=0;
cout<<"Number of days: ";
cin>>days;
int x=days;
while(days>=365)
	{
		days=days-365;
		year++;
	}	
while(days>=7)
	{
		days=days-7;
		week++;
	}
	cout<<"Years: "<<year<<"\n";
	cout<<"Weeks: "<<week<<"\n";
	cout<<"Days: "<<days<<"\n";
}
