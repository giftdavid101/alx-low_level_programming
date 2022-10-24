#include "main.h"
/**
 * _strlen - returns the length of a string or array of char
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
