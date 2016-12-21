/**
 * Exercise 1-19
 *
 * Write a function reverse(s) that reverses the character strings.
 * Use it to write a program that reverses its input a line at a time.
 */

#include <stdio.h>

#define MAX_LINE 1000

int getLine(char line[], int lim);

void reverse(char line[]);

int main(void) {
    int c, len;
    char line[MAX_LINE];

    while ((len = getLine(line, MAX_LINE)) > 0) {
        reverse(line);
        printf("%s", line);
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

void reverse(char line[]) {
    int i, j;
    char tmp;

    // Go to the end of the line
    for (i = 0; line[i] != '\0'; i++);

    i--;

    if (line[i] == '\n') {
        i--;
    }

    j = 0;
    while (j < i) {
        // Swap char
        tmp = line[j];
        line[j] = line[i];
        line[i] = tmp;
        i--;
        j++;
    }
}
