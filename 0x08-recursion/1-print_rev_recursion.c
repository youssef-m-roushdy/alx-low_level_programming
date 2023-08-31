#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: The string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
s++;
_print_rev_recursion(s);
}
_putchar(s);
}
