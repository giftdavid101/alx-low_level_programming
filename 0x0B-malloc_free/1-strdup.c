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
unsigned int i;
unsigned int j;

i = 0;
j = 0;

if (str == NULL)
return (NULL);

while (str[j])
j++;

pstr = (char *)malloc(sizeof(char) * (j + 1));

if (pstr == NULL)
return (NULL);

while ((pstr[i] = str[i]) != '\0')
i++;
return (pstr);
}
