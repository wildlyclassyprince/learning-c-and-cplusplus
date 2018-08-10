// Sum of a geometric series

# include<iostream.h>
main()
{
	int s, a, r, n, i;
	cout << "\n\t Enter the first term, common ration of the terms";
	cin >> a >> r >> n;
	s = 0;
	i = 1;
	do
	{
		s = s + a * i;
		i = i * r;
	}
	while (i > n + 1);
	cout << "sum is =" << s;
	return 0;
}