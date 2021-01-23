#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	long a,b,c=0;

	cout<<"enter 2 digit or 3 digit number\n";
	cin>>a;
	
	while (a>0)
	{
		b=a%10;
		a=a/10;
		c=(c*10)+b;
	}
	cout<<"Reverse of the given number is:\n"<<c;
	getch();
	
return 0;
}
