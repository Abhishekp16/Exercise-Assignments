#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	char a[100],b[100];
	cout<<"Enter a String \n";
	cin>>a;
	
	strcpy(b,a);
	strrev(b);
	
	if (strcmp(a,b) == 0)
	cout<<"The entered string is a Palindrome.\n";
	else
	cout<<"The entered string is not a Palindrome.\n";
	
	return 0;
}
