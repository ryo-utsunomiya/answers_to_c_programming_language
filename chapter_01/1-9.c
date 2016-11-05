/**
 * Exercise 1-9
 *
 * Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
 */

#include <stdio.h>

int main() {
    int c, last;
    last = '0'; // Cannot set empty string. So, we initialize with '0' instead of ''.

    while ((c = getchar()) != EOF) {
        if (c == ' ' && last == ' ') {
            last = c;
            continue;
        }

        putchar(c);
        last = c;
    }

    return 0;
}