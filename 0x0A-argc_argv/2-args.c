#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: number of arguments
 * @argv: arguments received
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
