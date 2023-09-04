#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of characters
 * initialized with a specific character.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the newly created array,
 * or NULL if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *a;

	unsigned int i = 0;

	a = (char *)malloc(size * sizeof(c));
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	if (a == NULL)
		return (NULL);
	return (a);
}
