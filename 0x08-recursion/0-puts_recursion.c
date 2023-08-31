#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a newline using recursion
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
_putchar(*s);
s++;
if (*s != '\0')
_puts_recursion(s);
if (*s == '\0')
{
_putchar('\n');
}
}
