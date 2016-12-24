/**
 * Exercise 1-23
 *
 * Write a program to remove all comments from a C program.
 * Don’t forget to handle quoted strings and character constants properly.
 * C comments do not nest.
 */

#include <stdio.h>

void go_to_comment_end() {
    char c, d;

    c = getchar();
    d = getchar();

    while (c != '*' || d != '/') {
        c = d;
        d = getchar();
    }
}

void print_quoted(char quote_char) {
    char c;
    putchar(quote_char);

    while ((c = getchar()) != quote_char) {
        putchar(c);

        if (c == '\\') { // special character
            putchar(getchar());
        }
    }

    putchar(c);
}

int main(void) {
    char c, d;

    while ((c = getchar()) != EOF) {
        if (c == '/') {
            d = getchar();

            if (d == '*') {
                go_to_comment_end();
            } else {
                putchar(c);
                putchar(d);
            }
        } else if (c == '\'' || c == '"') {
            print_quoted(c);
        } else {
            putchar(c);
        }
    }

    return 0;
}
