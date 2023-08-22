#include <stdio.h>
/**
 * print_array - Print elements of an integer array followed by a newline.
 * @a: Pointer to the integer array.
 * @n: Number of elements in the array.
 */
void print_array(int *a, int n)
{
int i;
i = 0;
while (i < n)
{
if (i != n - 1)
printf("%d, ", a[i]);
else
printf("%d", a[i]);
i++;
}
printf("\n");
}
