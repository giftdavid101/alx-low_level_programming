#include "main.h"

/**
 * get_endianness - a program that checks the endianness
 * Return: integer 0 or 1
 */

int get_endianness(void)
{
int x;
char *b;

x = 1;
b = (char *) &x;
return ((int)*b);

}
