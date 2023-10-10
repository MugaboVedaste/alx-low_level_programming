#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int count;
    unsigned long int fib1 = 1, fib2 = 2, next;

    count = 2;  /* Start with 2 because we already have 1 and 2 */

    printf("%lu, %lu", fib1, fib2); /* Print the first two Fibonacci numbers */

    while (count < 98)
    {
        next = fib1 + fib2;
        fib1 = fib2;
        fib2 = next;

        printf(", %lu", next);

        count++;
    }

    printf("\n");

    return (0);
}
