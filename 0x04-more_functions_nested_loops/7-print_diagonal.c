#include "main.h"
/**
 * print_diagonal - Prints a diagonal line of backslashes.
 * @n: The number of backslashes to print in the diagonal line.
 */
void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = n - i; j < n; j++)
_putchar(' ');
_putchar('\\');
if (i != n - 1)
_putchar('\n');
}
_putchar('\n');
}
