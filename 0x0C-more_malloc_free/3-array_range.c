#include "main.h"
#include <stdlib.h>

/**
 * array_range -  function that creates an array of integers.
 * @min: minimum values
 * @max: maximum values
 * Return: pointer
 */


int *array_range(int min, int max)
{
int *con;
int i, size;

if (min > max)
return (NULL);

size = max - min + 1;
con = malloc(sizeof(int) * size);

if (con == NULL)
return (NULL);

for (i = 0; min <= max; i++)
con[i] = min++;

return (con);
}
