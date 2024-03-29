#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes for s2 and S1
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int x = 0, y = 0, l1 = 0, l2 = 0;

while (s1 && s1[l1])
l1++;

while (s2 && s2[l2])
l2++;

if (n < l2)
{
concat = malloc(sizeof(char) * (l1 + n + 1));
}
else
{
concat = malloc(sizeof(char) * (l1 + l2 + 1));
}

if (!concat)
return (NULL);

while (x < l1)
{
concat[x] = s1[x];
x++;
}
while (n < l2 && x < (l1 + n))
concat[x++] = s2[y++];

while (n >= l2 && x < (l1 + l2))
concat[x++] = s2[y++];

concat[x] = '\0';

return (concat);
}
