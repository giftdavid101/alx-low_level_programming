#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new string, NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
char *arr;

while (s1 && s1[len1])
len1++;

while (s2 && s2[len2])
len2++;

arr = malloc(sizeof(char) * (len1 + len2 + 1));
if (arr == NULL)
return (NULL);

i = 0;
j = 0;

if (s1)
{
while (i < len1)
{
arr[i] = s1[i];
i++;
}
}

if (s2)
{
while (i < (len1 + len2))
{
arr[i] = s2[j];
i++;
j++;

}
}
arr[i] = '\0';
return (arr);
}
