#ifndef MAIN_H
#define HEADER_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>

int create_file(const char *filename, char *text_content);
size_t read_textfile(const char *filename, size_t letters);
#endif
