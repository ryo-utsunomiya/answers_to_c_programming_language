/**
 * Exercise 1-2
 *
 * Experiment to find out what happens when printf’s argument string contains \c,
 * where c is some character not listed above.
 */

/**
 * When you compile this program, you might get the "unknown escape sequence" warning.
 * When you run compiled executable, console will show "c", without backslash.
 */

#include <stdio.h>

int main() {
    printf("\c");
}
