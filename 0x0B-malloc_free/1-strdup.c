#include "main.h"
#include <stdlib.h>

/**
 * _strdup - eturns a pointer to a newly allocated space in memory
 * @str: parameter which is a string
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
char *pstr;
int i, j = 0;

pstr = (char *)malloc((sizeof(char) * j) + 1);
if (pstr == NULL)
{
return (NULL);
}

for (i = 0; i < j; i++)
pstr[i] = str[i];
pstr[j] = '\0';
return (pstr);

if (str == NULL)
return (NULL);
while (str[j] != '\0')
j++;
return (pstr);
}
