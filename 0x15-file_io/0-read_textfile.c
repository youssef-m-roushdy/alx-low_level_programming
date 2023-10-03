#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - Read and print the content of a text
 * file to the standard output.
 * @filename: A pointer to the name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The number of characters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t n;
char *buffer;

if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(letters);
if (buffer == NULL)
return (0);
n = read(fd, buffer, letters);
if (n == -1)
return (0);
write(1, buffer, n);
free(buffer);
close(fd);
return (n);
}
