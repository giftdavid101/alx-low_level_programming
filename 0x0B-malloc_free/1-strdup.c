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
int i = 0;
int j = 0;

pstr = (char *)malloc((sizeof(char) * j) + 1);
if (pstr == NULL)
return (NULL);
while (str[j])
j++;

if (str == NULL)
return (NULL);
while ((pstr[i] = str[i]) != '\0')
i++;
return (pstr);
}
