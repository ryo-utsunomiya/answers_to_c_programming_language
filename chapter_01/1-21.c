/**
 * Exercise 1-21
 *
 * Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same
 * spacing. Use the same tab stops as for detab. When either a tab or a single blank would suffice to reach a tab stop,
 * which should be given preference?
 */

#include <stdio.h>

#define TAB_STOP 4

void putchar_repeat(char c, int num);

int main(void) {
    char c, i;
    int nSpace, nTab;

    nSpace = 0;
    nTab = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            nSpace++;

            if (nSpace == TAB_STOP) {
                nTab++;
                nSpace = 0;
            }
        } else {
            putchar_repeat('\t', nTab);
            putchar_repeat(' ', nSpace);
            putchar(c);
            nSpace = 0;
            nTab = 0;
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