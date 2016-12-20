/**
 * Exercise 1-17
 *
 * Write a program to print all input lines that are longer than 80 characters.
 */

#include <stdio.h>

#define MAX_LINE 1000
#define TOO_LONG_LINE 80

int getLine(char line[], int lim);

int main(void) {
    int c, len;
    char line[MAX_LINE];

    while ((len = getLine(line, MAX_LINE)) > 0) {
        if (len > TOO_LONG_LINE) {
            printf("%s", line);
        }
    }

    return 0;
}

/**
 * @param s line
 * @param lim max length of line
 * @return length of line
 */
int getLine(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}
