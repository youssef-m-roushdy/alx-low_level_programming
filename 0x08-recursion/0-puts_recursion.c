#include <string.h>
#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a newline using recursion
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
s++;
_puts_recursion(s);
}
else
_putchar('\n');
}
