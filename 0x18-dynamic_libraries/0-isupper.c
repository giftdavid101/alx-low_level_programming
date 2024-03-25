#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: function parameter
 * Return: 1 if c is upper and 0 if otherwise
 */

int _isupper(int c)
{
if (c <= 90 && c >= 65)
{
return (1);
}
return (0);
}
