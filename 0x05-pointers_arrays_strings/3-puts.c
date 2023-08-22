#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _puts - Prints a string followed by a newline.
 * @str: Pointer to the input string.
 *
 * This function takes a pointer to a
 * null-terminated string @str and prints
 * the string followed by a newline using the
 * standard library function `puts`.
 * It effectively outputs the content of the string
 * to the standard output.
 */
void _puts(char *str)
{
int i;
int len;
len = strlen(str);
for (i = 0; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
