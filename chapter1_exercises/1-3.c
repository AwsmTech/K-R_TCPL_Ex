/*
    Exercise 1-3. 
    Modify the temperature conversion program 
    to print a heading above the table.
*/

#include <stdio.h>

int main(void)
{
float fahr, celsius;
	int lower, upper, step;

	lower = -30;   /* lower limit of temperature table */
	upper = 500; /* upper limit */
	step = 5;   /* step size */

	fahr = lower;
    printf("Cels\tfahr\n");
	while (fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%0.2f\t%6.2f\n", fahr, celsius);
		fahr = fahr + step;
	}

    return 0;
}