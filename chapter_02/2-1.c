/**
 * Exercise 2-1
 *
 * Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned,
 * by printing appropriate values from standard headers and by direct computation.
 */

#include <stdio.h>
#include <limits.h>

int main() {
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
    printf("\n");

    printf("By computation (Signed)\n");
    printf("Minimum char(signed): %d\n", -(char) ((unsigned char) ~0 >> 1) - 1);
    printf("Maximum char(signed): %d\n", (char) ((unsigned char) ~0 >> 1));
    printf("Minimum short(signed): %d\n", -(short) ((unsigned short) ~0 >> 1) - 1);
    printf("Maximum short(signed): %d\n", (short) ((unsigned short) ~0 >> 1));
    printf("Minimum int(signed): %d\n", -(int) ((unsigned int) ~0 >> 1) - 1);
    printf("Maximum int(signed): %d\n", (int) ((unsigned int) ~0 >> 1));
    printf("Minimum long(signed): %ld\n", -(long) ((unsigned long) ~0 >> 1) - 1);
    printf("Maximum long(signed): %ld\n", (long) ((unsigned long) ~0 >> 1));
    printf("\n");

    printf("By computation (Unsigned)\n");
    printf("Maximum char(unsigned): %d\n", (unsigned char) ~0);
    printf("Maximum short(unsigned): %d\n", (unsigned short) ~0);
    printf("Maximum int(unsigned): %u\n", (unsigned int) ~0);
    printf("Maximum long(unsigned): %lu\n", (unsigned long) ~0);

    return 0;
}
