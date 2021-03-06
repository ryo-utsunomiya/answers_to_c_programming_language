/**
 * Exercise 1-4
 *
 * Modify the temperature conversion program to print a heading above the table.
 */

#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahr\tCelsius\n"); // prints header

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%4.0f\t%6.1f\n", fahr, celsius);
        fahr += step;
    }
}
