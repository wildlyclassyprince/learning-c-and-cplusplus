#include<iostream>
#include<conio>

void main()

{
	clrscr();

	int a, b, c, d, e, f;

	cout<<"\n Enter first digit:";
	cin>>a;
	cout<<"\n Enter second digit:";
	cin>>b;

	a + b = c;
	a - b = d;
	a * b = e;
	a / b = f;

	switch(a, b)
	{
		case 1 : cout<<c;
		break;

		case 2 : cout<<d;
		break;

		case 3 : cout<<e;
		break;

		case 4 : cout<<f;
		break;

		default: cout<<"\n BAD ENTRY"
	}

	getch();
}
