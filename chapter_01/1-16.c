/**
 * Exercise 1-16
 *
 * Revise the main routine of the longest-line program so it will correctly print the length of arbitrary long input
 * lines, and as much as possible of the text.
 */

#include <stdio.h>

#define MAX_LINE 1000

int getLine(char line[], int maxLine);

void copy(char to[], char from[]);

int main(void) {
    int c, len, max;
    char line[MAX_LINE];
    char longest[MAX_LINE];

    max = 0;
    while ((len = getLine(line, MAX_LINE)) > 0) {
        if (line[len - 1] != '\n') {
            while ((c = getchar()) != EOF && c != '\n') {
                ++len;
            }
        }

        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) {
        printf("%s", longest);
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

void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}