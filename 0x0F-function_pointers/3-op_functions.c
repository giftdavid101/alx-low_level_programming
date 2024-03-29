#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - calculates the sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - calculates the sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - calculates the product of two integers
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - calculates the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder of a divided b
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - entry point
 * @a: operator
 * @b: char
 * Return: integer
 */


int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}

return (a % b);
}
