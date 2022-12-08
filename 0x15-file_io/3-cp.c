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
int f, d, ret = 1;
char *to, *from, *buf, *tmp;

check_argc(argc);
from = strdup(argv[1]);
to = strdup(argv[2]);

f = open_file(from, O_RDONLY);
d = open_file(to, O_CREAT | O_RDWR | 0664);

buf = calloc(BFSZ, sizeof(char));
if (!buf)
{
confirm_close_fd(f);
confirm_close_fd(d);
return (-1);
}

ret = read_file(f, buf);
while (ret >= 1)
{
write(d, buf, ret);
tmp = realloc(buf, BFSZ + 1);
if (!tmp)
{
free(buf);
confirm_close_fd(f);
confirm_close_fd(d);
return (-1);
}

buf = tmp;
ret = read(f, buf, sizeof(buf));
}
free(from);
free(to);
confirm_close_fd(f);
confirm_close_fd(d);
return (0);
}

/**
 * open_file - opens and then checks if success
 * @file: the file descriptor
 * @oflags: the name of the file
 * Return: file descriptor
 */

int open_file(char *file, int oflags)
{
int fd = open(file, oflags, 0664);
if (fd < 1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
exit(-1);
}

return (fd);
}

/**
 * check_argc - checks the number of arguments passed
 * @argc: the number of arguments
 */

void check_argc(int argc)
{
if (argc != 3)
{
dprintf(2, "Usage: cp file_from file_to\n");
exit(97);
}
}

/**
 * confirm_close_fd - confirm that a file descriptor closes succesfully
 * @fd: file descriptor
 * Return: 0 on success
 */

int confirm_close_fd(int fd)
{
close(fd);
if (fcntl(fd, F_GETFD) == -1)
{
return (0);
}
else
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * read_file - read a file, and handle failure
 *  @fd: file descriptor
 *  @file: the name of the file that was read from
 *  Return: return value from read operation
 */

int read_file(int fd, char *file)
{
int ret;
ret = read(fd, file, sizeof(file));
if (ret < 1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
exit(-1);
}
return (ret);
}
