/**
 * Exercise 1-4
 *
 * Write a program to print the corresponding Celsius to Fahrenheit table.
 */

#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Celsius\tFahr\n"); // prints header

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32;
        printf("%7.0f\t%4.1f\n", celsius, fahr);
        celsius += step;
    }
}
