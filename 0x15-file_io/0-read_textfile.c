#include "main.h"

/**
 * read_textfile - Reads text file and
 * prints it to the POSIX standard output.
 * @letters: number of letters to print
 * @filename: name of a file to read
 * Return: number of letters it could read and print
 */
 
ssize_t read_textfile(const char *filename, size_t letters)
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
close(fd)
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
