#include <stdio.h>

/**
 * main - Prints the sum of Even Fibonacci numbers
 * less than 4000000
 * Return: void
 */

int main(void)
{
long int total_sum, sum, first, second;
total_sum = 0;
sum = 0;
first = 0;
second = 1;

while (sum < 4000000)
{
sum = first + second;
if (sum % 2 == 0)
{
total_sum += sum;

}
first = second;
second = sum;
}

return (0);
}
