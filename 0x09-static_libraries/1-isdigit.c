#include "main.h"
/**
 * _isdigit - A unction that checks for a digit
 * @c: ASCII code
 * Return: 1 if c is a digit, 0 otherwise 0
 */
int _isdigit(int c)
{
        if (c >= 48 && c <= 57)
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
