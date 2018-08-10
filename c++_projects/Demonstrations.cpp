// Program to calculate the Acherman's function

#include <iostream.io>
void main()
{
	int m, n;
	int a(int m, int n);
	cout << "\n\t Enter the value of m and n = ";
	cin >> m >> n;
	cout << a(m, n);
}
int a(int m, int n)
{
int a1;
if ((m == 0) && (n != 0))
	a1 = n + 1;
else
	if ((n == 0) && (m != 0))
		a1 = a(m - 1, 1);
	else
		a1 = a(m - 1, a(m, (n-1)));
	return (a1)
}

///////////////////////////////////////////////////////

// Demostration of binary search

#include <iostream.h>
#include <conio.h>
void clr_screen(void);
void main()
{
	int range[50], T, i, j, NUM;
	int first = 0, last, mid = 0, find = 0, search;
	clr_screen();
	gotoxy(0, 0);
	cout << "Enter the total numbers in an array :";
	cin >> NUM;
	for (i = 0; i < NUM; i++)
	{
		cout << "Value" << i + 1 << ".";
		cin >> range[i];
	}
	// Sorting procedures before binary search
	for (i = 0; i < NUM - 1; i++)
	{
	for (j = i + 1; j < NUM; j++)
	{
	if (range[i] > range[j])
	{
	T = range[i];
	range[i] = range[j];
	range[j] = T;
}
}
}
cout << "Sorted elements are : \n";
for (i = 0; i < NUM; i++)
{
	cout << "\n Value" << i + 1 << "." << range[i];
}
first = 0;
find  = 0;
last  = NUM - 1;
// Binary search procedure 
cout << "\n Enter the element to search in the above list";
cin >> search;
while ((first <= last) && (find == 0))
{
	mid = (first + last)/2;
	if (range[mid] == search)
		find = mid;
	else
		if (range[mid] < search)
			first = mid + 1;
		else
			last = mid - 1;
}
if (find > 0)
cout << "\n The position of hte element is:" << ++find;
else
cout << "\n Search not perfect";
getch(); // To make auto break
}
// Function to clear clr_screen
void clr_screen(void)
{
	int x = 0;
	while (x <= 25)
	{
		cout << "\n";
		x++;
	}
}

////////////////////////////////////////////////////////////////

// Demostration of program insertion sort 

#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int range[100], i, j, N, T, x;
	clrscr();
	cout << "Enter your total number of elements:";
	cin >> N;
	cout << "Enter the array elemts: \n";
	for (i = 0; i < N; i++)
	{
		cout << "Location" << i + 1 << ". Value:";
		cin >> range[i];
	}
	for (i = 1; i < N; i++)
	{
		T = range[i];// Extracts the first element of the unsorted part
		j = i - 1;
		while ((T < range[j]) && (j >= 0))
		{
			range[j + 1] = range[j];
			j = j + 1;
		}
		range[j + 1] = T;
		for (x = 0; x < N; x++) // Displays the output after every insertion
			cout << range[x] << "";
		cout << "\n";
	}
	cout << "\n The sorted list is ... \n";
	for (i = 0; i < N; i++)
		cout << range[i] << end;
}

//////////////////////////////////////////////////////////////////////////////////

// Demostration of selection sort 

#include <iostream.h>
#include <conio.h>
main ()
{
	
}