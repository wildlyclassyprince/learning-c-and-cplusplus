#include <stdio.h>

#define LOWER	0	/* lower limit of table */
#define UPPER	300 	/* upper limit */
#define STEP 	20 	/* step size */

/* print Fahrenheit-Celsius table 
   for fahr = 0, 20, ... , 300 */

/* 'convertor' function declaration */
float convertor(float value_fahr, float step_value, float lower_value, float upper_value);

int main()
{
 	
    /* variable declarations and initializations */
    float fahr;	/* Fahrenheit temp starting point */
	
    /* 'convertor' function call */
    convertor(fahr, STEP, LOWER, UPPER);
}


/* 'convertor' function definition */
float convertor(float value_fahr, float step_value, float lower_value, float upper_value) 
{
    /* define variable 'celsius' */
    float celsius;

    /* loop over 'value_fahr' to calculate 'celsius' */
    printf("Fahrenheit\tCelsius\n");
    for(value_fahr = lower_value; value_fahr <= upper_value; value_fahr += step_value) 
    {
	celsius = 5.0/9.0 * (value_fahr - 32.0);
	printf("   %3.0f\t\t%6.1f\n", value_fahr, celsius);
    }

    return 0;
}
