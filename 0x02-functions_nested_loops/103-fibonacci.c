#include <stdio.h>

/**
 * main - Prints the sum of Even Fibonacci numbers
 * less than 4000000
 * Return: void
 */

int main(void)
{
unsigned long fibVal = 0, fib2 = 1, fibsum;
float totalSum;
while (1)
{
fibsum = fibVal + fib2;
if (fibsum > 4000000)
break;
if ((fibsum % 2) == 0)
totalSum += fibsum;
fibVal = fib2;
fib2 = fibsum;
}
printf("%.0f\n", totalSum);
return (0);
}
