/**
 * Exercise 2-2
 *
 * Write a loop equivalent to the for loop above without using && or ||.
 */

#include <stdio.h>

int main() {
    int i, lim;
    char s[];
    lim = 1000;

    for (i = 0; i < lim - 1; ++i) {
        c = getchar();
        if (c == EOF) break;
        else if (c == '\n') break;

        s[i] = c;
    }

    printf("%s", s);

    return 0;
}
