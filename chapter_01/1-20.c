/**
 * Exercise 1-20
 *
 * Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop.
 * Assume a fixed set of tab stops, say every n columns.
 * Should n be a variable or a symbolic parameter?
 */

#include <stdio.h>

#define TAB_STOP 4

void putchar_repeat(char c, int num);

int main(void) {
    char c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar_repeat(' ', TAB_STOP);
        } else {
            putchar(c);
        }
    }

    return 0;
}

void putchar_repeat(char c, int count) {
    while (count > 0) {
        putchar(c);
        count--;
    }
}