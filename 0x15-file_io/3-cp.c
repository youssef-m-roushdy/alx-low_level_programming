#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024
/**
 * exitWithError - Print an error message and exit the program with
 * a specific code.
 * @exitCode: The exit code to terminate the program with.
 * @errorMessage: A pointer to the error message string to be printed.
 */
void exitWithError(int exitCode, const char *errorMessage)
{
dprintf(STDERR_FILENO, "%s\n", errorMessage);
exit(exitCode);
}
/**
 * bytesrdwr - Read data from a source file and write it to a
 * destination file.
 * @src_fd: The file descriptor of the source file to read from.
 * @dest_fd: The file descriptor of the destination file to write to.
 * @file_from: The name of the source file (for error messages).
 * @file_to: The name of the destination file (for error messages).
 */
void bytesrdwr(int src_fd, int dest_fd, char *file_from, char *file_to)
{
char buffer[BUFFER_SIZE];
ssize_t bytesRead, bytesWritten;

while ((bytesRead = read(src_fd, buffer, BUFFER_SIZE)) > 0)
{
bytesWritten = write(dest_fd, buffer, bytesRead);
if (bytesWritten != bytesRead)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
close(src_fd);
close(dest_fd);
exitWithError(99, "");
}
}
if (bytesRead == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
close(src_fd);
close(dest_fd);
exitWithError(98, "");
}
}
/**
 * main - Entry point of the file copy program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: Always returns 0.
 */
int main(int argc, char *argv[])
{
char *file_from = argv[1];
char *file_to = argv[2];
int src_fd;
int dest_fd;

if (argc != 3)
exitWithError(97, "Usage: cp file_from file_to");
src_fd = open(file_from, O_RDONLY);
dest_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC);

if (src_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exitWithError(98, "");
}
if (dest_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
close(src_fd);
exitWithError(99, "");
}
bytesrdwr(src_fd, dest_fd, file_from, file_to);

if (close(src_fd) == -1 || close(dest_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
(close(src_fd) == -1) ? src_fd : dest_fd);
exitWithError(100, "");
}
return (0);
}

