/**
 * Exercise 1-18
 *
 * Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.
 */

#include <stdio.h>

#define MAX_LINE 1000
#define TOO_LONG_LINE 80

int getLine(char line[], int lim);

int rtrim(char line[]);

int main(void) {
    int c, len;
    char line[MAX_LINE];

    while ((len = getLine(line, MAX_LINE)) > 0) {
        if (rtrim(line) > 0) {
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

int rtrim(char line[]) {
    int i;

    // Go to the end of line
    for (i = 0; line[i] != '\n'; i++);

    i--;

    // Remove trailing blanks and tabs
    for (; (line[i] == ' ') || (line[i] == '\t'); i--);

    if (i >= 0) { // This line is not empty
        i++;
        line[i] = '\n';
        i++;
        line[i] = '\0';
    }

    return i;
}