#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: character memory will be allocated to
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
void *con;

con = malloc(b);

if (con == NULL)
exit(98);
return (con);

}
