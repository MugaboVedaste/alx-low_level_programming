#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table.
 * @n: The times table to print.
 *
 * Description: This function prints the times table for the given value n.
 * If n is greater than 15 or less than 0, it does not print anything.
 */
void print_times_table(int n)
{
    if (n >= 0 && n <= 15)
    {
        int i, j, result;

        for (i = 0; i <= n; i++)
        {
            for (j = 0; j <= n; j++)
            {
                result = i * j;
                if (j == 0)
                    printf("%d", result);
                else if (result < 10)
                    printf("   %d", result);
                else if (result < 100)
                    printf("  %d", result);
                else
                    printf(" %d", result);

                if (j < n)
                    printf(",");
                else
                    printf("\n");
            }
        }
    }
}
