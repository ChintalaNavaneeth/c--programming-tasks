#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	char a[50];
	cout<<"Enter string to convert uppercase letters to lower case letters: \n";
	cin>>a;
	
	 for(int i=0;a[i]!='\0';i++)
	  {
	  	if(a[i]>=65 && a[i]<=92)
	  {
	  	a[i]=a[i]+32;
	  }
	}
	cout<<"Entered string in lower case letter "<<a;
}
