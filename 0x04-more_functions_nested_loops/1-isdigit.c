#include "main.h"

/**
 * _isdigit - checks a digit 0 - 9
 * @c: input parameter
 * Return: 1 if c is a digit and 0if otherwise
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
