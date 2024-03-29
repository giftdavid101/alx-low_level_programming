#include "main.h"

/**
 * clear_bit - that sets the value of a bit to 0 at a given index.
 * @n: paramrter one
 * @index: parameter two
 * Return: integer 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x;
if (index > (sizeof(unsigned long int) * 8 - 1))

return (-1);
x = ~(1 << index);
*n = *n & x;

return (1);
}
