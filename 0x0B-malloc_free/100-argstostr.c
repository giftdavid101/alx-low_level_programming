#include "main.h"
#include <stdlib.h>

/**
 * argstostr - that concatenates all the arguments of your program
 * @ac: num of argument
 * @av: aray of arguments
 * Return: Pointer or NULL
 */

char *argstostr(int ac, char **av)
{
int i, j, k, len;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

len = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
len++;
}

str = malloc(sizeof(char) * (len + 1));

if (str == NULL)
return (NULL);

k = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
return (str);
}
