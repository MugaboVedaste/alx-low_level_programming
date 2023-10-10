#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 */
void print_alphabet(void)
{
    char letter = 'a';

    /* Loop through the lowercase alphabet characters */
    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }

    /* Print a newline character to end the line */
    _putchar('\n');
}
