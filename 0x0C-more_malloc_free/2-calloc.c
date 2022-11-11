#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with byte
 * @s: memory area
 * @b: char
 * @n: number
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}



/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: elements
 * @size: number of bytes on each elements
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *con;

if (size == 0 || nmemb == 0)
return (NULL);

con = malloc(nmemb * size);
if (con == NULL)
return (NULL);

_memset(con, 0, nmemb * size);

return (con);
}
