#include<iostream.h>
#include<conio.h>

void main()

{
	float A, C, r;
	cout<<"\n Enter the radius of the circle:";
	cin>>r;
	C = 2*pi*r;
	cout<<"\n Circumference:"<<C;
	A = pi*(r**2);
	cout<<"\n Area:"<<A;
	getch();
}