#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
    /* Check if the ASCII value of c falls within the lowercase range */
    if (c >= 'a' && c <= 'z')
    {
        return (1); /* Return 1 if it's lowercase */
    }
    else
    {
        return (0); /* Return 0 if it's not lowercase */
    }
}
