#include <unistd.h>
#include "main.h"
/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to be written.
 *
 * This function takes a character @c and writes it
 * to the standard output
 * using the `write` system call. It is used to
 * output individual characters.
 *
 * Return: On success, the number of bytes written is returned.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
