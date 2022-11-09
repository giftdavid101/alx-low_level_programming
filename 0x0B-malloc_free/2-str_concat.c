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
unsigned int l1, l2, l3, i;
char *arr;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

l1 = 0;

while (*(s1 + l1) != '\0')
{
l1++;
}
l2 = 0;

l3 = l1 + l2;
arr = (char *) malloc(sizeof(char) * l3 + 1);
if (arr == NULL)
return (NULL);
for (i = 0; i < l1; i++)
arr[i] = s1[i];
for (i = 0; i < l2; i++)
arr[i + l1] = s2[i];
return (arr);
}
