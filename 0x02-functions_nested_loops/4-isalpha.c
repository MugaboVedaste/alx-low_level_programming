#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic character.
 * @c: The character to check.
 *
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise.
 */
int _isalpha(int c)
{
    /* Check if the ASCII value of c falls within the lowercase or uppercase letter ranges */
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return (1); /* Return 1 if it's an alphabetic character */
    }
    else
    {
        return (0); /* Return 0 if it's not an alphabetic character */
    }
}
