#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Allocates a 2D grid of integers with specified dimensions.
 * @width: The width (number of columns) of the grid.
 * @height: The height (number of rows) of the grid.
 *
 * Return: A pointer to the newly allocated 2D grid,
 * or NULL if memory allocation fails
 *         or if width or height is less than or equal to 0.
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **arr;
if (width <= 0 || height <= 0)
return (NULL); 
arr = (int **)malloc(height * sizeof(int *));
if (arr == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
arr[i] = (int *)malloc(width * sizeof(int));
if (arr[i] == NULL)
{
for (j = 0; j < i; j++)
free(arr[j]);
free(arr);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
