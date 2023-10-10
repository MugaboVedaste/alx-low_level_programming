#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to extract the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
    int last_digit;

    /* Get the absolute value of n to handle negative numbers */
    if (n < 0)
    {
        n = -n;
    }

    /* Extract the last digit by taking the remainder when divided by 10 */
    last_digit = n % 10;

    /* Print the last digit */
    _putchar('0' + last_digit);

    return last_digit;
}
