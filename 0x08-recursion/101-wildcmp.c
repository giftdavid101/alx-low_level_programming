#include "main.h"

int bandersnatch(char *s1, char *s2);
char *move(char *s2);

/**
 * wildcmp - compares two strings recursively,
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 1 if strings can be considered identical and 0 otherwise
 */


int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1));
if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
return (1);
}
return (0);
}
