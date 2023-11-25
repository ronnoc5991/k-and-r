#include <stdio.h>

/* print Fahrenheit-Celsius table fro fahr = 20, ..., 300; floating-point version */

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Fahrenheit -> Celsius\n");

    while(fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%10.0f    %7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}