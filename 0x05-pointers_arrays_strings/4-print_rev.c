#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - Prints a string in reverse followed by a newline.
 * @s: Pointer to the input string.
 *
 * This function takes a pointer to a
 * null-terminated string @s and prints
 * the characters of the string in
 * reverse order followed by a newline.
 * It uses the _putchar function to output individual characters.
 */
void print_rev(char *s)
{
int i;
i = strlen(s) - 1;
while (i != -1)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
