/**
 * Exercise 1-5
 *
 * Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.
 */

#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = upper;
    while (fahr >= lower) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%4.0f\t%6.1f\n", fahr, celsius);
        fahr -= step;
    }
}
