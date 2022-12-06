#include "main.h"
#include <string.h>

/**
 * main - check code
 * @argc: parameter one
 * @argv: parameter two
 * Return: Always 0
 */

int main(int argc, char **argv)
{
int f, d;
char *buf[BUFSIZ] = { 0 };
char *to, *from;

if (argc != 3)
{
dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}

to = strdup(argv[1]);
from = strdup(argv[2]);
f = open(from, O_RDONLY, 0600);
if (f < 1)
{
printf("Error: Can't read from file %s", from);
exit(-1);
}
d = open(to, O_CREAT, O_WRONLY | O_TRUNC, 0664);
if (d < 1)
{
printf("Error: Can't write to %s", to);
exit(99);
}

close(f);
confirm_close_fd(f);
close(d);
confirm_close_fd(d);
free(to);
free(from);
return (0);
}

