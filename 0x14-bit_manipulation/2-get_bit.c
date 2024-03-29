#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @index: index of the bit
 * @n:parameter
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int div, bin;

if (index > (sizeof(unsigned long int) * 8 - 1))

return (-1);
div = 1 << index;
bin = n & div;
if (bin == div)
return (1);
return (0);
}
