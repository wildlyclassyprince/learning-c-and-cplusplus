#include <stdio.h>
#include <stdarg.h>

/* 'AddDouble' function declaration */
double AddDouble(int x, ... );

/* 'main' function */
int main() {
	
	/* elements passed to 'AddDouble' */
	int 	j;
	double 	values[4] = {1.5, 2.5, 3.5, 4.5};
	double 	*ptr_values;
	
	ptr_values = values;

	/* printing */
	for (j = 1; j < 5; j++) {
		if (j = 1) {
			printf("Given an argument: %2.1f\n", ptr_values[0]);
			printf("The result returned by 'AddDouble()' is: %2.1f\n\n", AddDouble(j, ptr_values[0]));
		};
		if (j = 2) {
			printf("Given arguments %2.1f and %2.1f\n", ptr_values[0], ptr_values[1]);
			printf("The result returned by 'AddDouble()' is: %2.1f\n\n", AddDouble(j, ptr_values[0], ptr_values[1]));
		};
		if (j = 3) {
			printf("Given arguments %2.1f, %2.1f and %2.1f\n", ptr_values[0], ptr_values[1], ptr_values[2]);
			printf("The result returned by 'AddDouble()' is: %2.1f\n\n", AddDouble(j, ptr_values[0], ptr_values[1], ptr_values[2]));
		};
		if (j = 4) {
			printf("Given arguments %2.1f, %2.1f, %2.1f and %2.1f\n", ptr_values[0], ptr_values[1], ptr_values[2], ptr_values[3]);
			printf("The result returned by 'AddDouble()' is: %2.1f\n\n", AddDouble(j, ptr_values[0], ptr_values[1], ptr_values[2], ptr_values[3]));
		};
	};

	return 0;

}

/* 'AddDouble' function definition */
double AddDouble(int x, ... ) {
	
	/* variable definitions */
	va_list 	arglist;
	int 		i;
	double 		result = 0.0;

	printf("The number of arguments is: %d\n", x);
	va_start(arglist, x);
	for (i = 0; i < x; i++)
		result += va_arg(arglist, double);
	va_end(arglist);
	
	return result;
}
