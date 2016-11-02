/**
 * Exercise 1-8
 *
 * Write a program to count blanks, tabs, and newlines.
 */

#include <stdio.h>

int main() {
    int c, bl, tab, nl;

    bl = tab = nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') ++bl;
        else if (c == '\t') ++tab;
        else if (c == '\n') ++nl;
    }

    printf("Blanks\tTabs\tNew Lines\n");
    printf("%d\t%d\t%d\n", bl, tab, nl);
}