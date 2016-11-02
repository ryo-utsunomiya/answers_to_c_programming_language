/**
 * Exercise 1-6
 *
 * Verify that the expression getchar() != EOF is 0 or 1.
 */

/**
 * Run following commands to verify.
 *
 * 1. gcc 1-6.c -o verify_eof
 * 2. echo 'hi' | ./verify_eof
 *
 * Output will be "1110".
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
    int c;
    while ((c = getchar()) != EOF) {
        printf("%d", c != EOF);
    }
    printf("%d", c != EOF); // now c is EOF
}