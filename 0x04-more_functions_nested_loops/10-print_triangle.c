#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Prints a right-aligned triangle of '#' characters.
 * @size: The number of rows in the triangle.
 */
void print_triangle(int size)
{
int i, j, k;
for (i = 0; i < size; i++)
{
for (j = i + 1; j < size; j++)
{
printf(" ");
}
for (k = size - i - 1; k < size; k++)
{
printf("#");
}
if (i != size - 1)
printf("\n");
}
printf("\n");
}
