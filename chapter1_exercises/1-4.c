/*
    Exercise 1-4.
    Write a program to print the corresponding celsius to Fahrenheit table.
 */

#include <stdio.h>

// C: Celsius temperature    F:Fahrenheit temperature
// C = (5/9)*(F-32)
// therefore F = (9/5)*C + 32

int main(void)
{
    double fahr, celsius;
    int lower, upper, step;

    lower = -30;
    upper = 150;
    step = 10;

    celsius = lower;

    printf("Cels\tFahr\n");
    while (celsius <= 150)
    {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%.0f\t%6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}