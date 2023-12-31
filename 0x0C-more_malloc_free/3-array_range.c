#include <stdlib.h>
#include "main.h"
/**
 * array_range - Creates an array of integers
 * containing a range of values.
 * @min: The minimum value of the range.
 * @max: The maximum value of the range.
 *
 * Return: A pointer to the newly created array,
 * or NULL if memory allocation fails
 *         or if min is greater than max.
 */
int *array_range(int min, int max)
{
int *arrRange;
int i, c;
c = min;
if (min > max)
return (NULL);
arrRange = malloc((max - min + 1) * sizeof(int));
if (arrRange == NULL)
return (NULL);
for (i = 0 ; i <= max - min; i++)
{
arrRange[i] = c;
c++;
}
return (arrRange);
}
