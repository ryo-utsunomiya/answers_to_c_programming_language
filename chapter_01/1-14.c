/**
 * Exercise 1-14
 *
 * Write a program to print a histogram of the frequencies of different characters in its input.
 */

#include <stdio.h>

#define NUM_CHARS 256

int main(void) {
    int c, i, j;
    int chars[NUM_CHARS];

    for (i = 0; i < NUM_CHARS; i++) {
        chars[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        chars[c]++;
    }

    for (i = 0; i < NUM_CHARS; i++) {
        if (chars[i] == 0) {
            continue;
        }

        putchar(i);
        for (j = 0; j < chars[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}