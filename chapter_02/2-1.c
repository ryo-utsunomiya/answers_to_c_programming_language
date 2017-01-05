/**
 * Exercise 2-1
 *
 * Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned,
 * by printing appropriate values from standard headers and by direct computation.
 */

#include <stdio.h>
#include <limits.h>

int main() {
    char c;
    short s;
    int i;
    long l;
    long long ll;

    printf("From header (Signed)\n");
    printf("CHAR_MAX: %d\n", SCHAR_MAX);
    printf("CHAR_MIN: %d\n", SCHAR_MIN);
    printf("SHORT_MAX: %d\n", SHRT_MAX);
    printf("SHORT_MIN: %d\n", SHRT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("INT_MIN: %d\n", INT_MIN);
    printf("LONG_MAX: %ld\n", LONG_MAX);
    printf("LONG_MIN: %ld\n", LONG_MIN);

    printf("\n");

    printf("From header (Unsigned)\n");
    printf("CHAR_MAX: %d\n", CHAR_MAX);
    printf("CHAR_MIN: %d\n", CHAR_MIN);
    printf("SHORT_MAX: %d\n", USHRT_MAX);
    printf("INT_MAX: %u\n", UINT_MAX);
    printf("LONG_MAX: %lu\n", ULONG_MAX);

    return 0;
}
