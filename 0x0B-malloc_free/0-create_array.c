#include "main.h"
#include  <stdlib.h>


/**
 *  create_array - function that creates an array of chars,
 *  and initializes it with a specific char.
 *  @size: size of memory to print.
 *  @c: character making up the array.
 *  Return: a pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int index;

arr = malloc(sizeof(c) * size);
if (size == 0)
{
return (NULL);
}
if (arr == NULL)
{
return (NULL);
}
for (index = 0; index < size; index++)
{
arr[index] = c;
}
return (arr);
}
