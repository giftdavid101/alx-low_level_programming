#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: parameter one
 * @index: parameter two
 * Return: integer -1 or 1
 */


int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int y;

if (index >  (sizeof(unsigned long int) * 8 - 1))
return (-1);
y = 1 << index;
*n = *n | y;
return (1);
}
