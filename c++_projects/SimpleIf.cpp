#include<iostream.h>
#include<conio.h>

void main()

{
	clrscr();

	int age;
	cout<<"\n Enter your age:";
	cin>>age;
	if (age >= 18)
	{
		cout<<"\n Eligible to vote";
	}
	else
	{
		cout<<"\n Ineligible to vote";
	}

	getch();
}