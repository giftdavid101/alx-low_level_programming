#include "main.h"

/**
 * main - check code
 * @argc: parameter one
 * @argv: parameter two
 * Return: Always 0
 */

int main(int argc, char **argv)
{
int fd;
char *buf[BUFSIZ] = { 0 };
char *file_to, *file_from;

if (argc != 3)
{
dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}

file_to = strdup(argv[1]);
file_from = strdup(argv[2]);
fd = open(file_to, O_WRONLY | O_TRUNC, 0600);
if (fd < 1)
{
return (-1);
}
fd = open(file_from, O_RDONLY | O_CREAT, 0664);
if (fd < 1)
{
printf("Error: Can't read from file %s", file_from);
exit(-1);
}
close(fd);
if (fd < 0)
{
printf("Error: Can't close fd %d", fd);
exit(100);
}
return (0);
}

