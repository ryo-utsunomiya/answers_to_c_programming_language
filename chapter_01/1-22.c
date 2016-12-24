/**
 * Exercise 1-22
 *
 * Write a program to “fold” long input lines into two or more shorter lines after the last non-blank character that
 * occurs before the n-th column of input. Make sure your program does something intelligent with very long lines, and
 * if there are no blanks or tabs before the specified column.
 */

#include <stdio.h>

#define TAB_WIDTH 4
#define LINE_LENGTH 40

int main(void) {
    int pos = 0, last = 0, c, i, col = 0;
    char line[LINE_LENGTH];

    while ((c = getchar()) != EOF) {
        line[pos] = c;

        if (c == '\t' && col <= LINE_LENGTH - TAB_WIDTH) {
            for (i = col % TAB_WIDTH; i < TAB_WIDTH; ++i) {
                line[pos] = ' ';
                ++pos;
            }

            col += (TAB_WIDTH - col % TAB_WIDTH);
        }

        if (c != '\t') {
            ++pos;
            ++col;
        }

        if (c == ' ' || c == '\t') {
            last = pos - 1;
        }

        if (c == '\n') {
            line[pos] = '\0';
            printf("%s", line);
            pos = last = 0;
            col = 0;
        }

        if (pos == LINE_LENGTH) {
            for (i = 0; i < last; ++i) {
                printf("%c", line[i]);
            }

            putchar('\n');

            for (i = 0; i < LINE_LENGTH - last; ++i) {
                if (line[last + i + 1] != ' ' || line[last + i + 1] != '\t') {
                    line[i] = line[last + i + 1];
                }
            }

            pos = LINE_LENGTH - last - 1;
            col = pos;
        }
    }

    for (i = 0; i < pos; ++i) {
        printf("%c", line[i]);
    }

    putchar('\n');

    return 0;
}
