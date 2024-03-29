#include "main.h"

/**
 * create_file - create a file
 * prints it to the POSIX standard output.
 * @text_content: number of letters to print
 * @filename: name of a file to read
 * Return: integer 1 || -1
 */

int create_file(const char *filename, char *text_content)
{
int fd;
size_t ret;

if (!filename)
return (-1);

fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (fd < 1)
return (-1);
if (!text_content)
{
close(fd);
return (0);
}
ret = write(fd, text_content, strlen(text_content));
if (ret < 1 || ret != strlen(text_content))
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
