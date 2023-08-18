#include "main.h"
/**
 * print_square - Prints a square made of '#' characters.
 * @size: The size of the square's sides.
 */
void print_square(int size)
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
_putchar('#');
if (i != size - 1)
_putchar('\n');
}
_putchar('\n');
}
