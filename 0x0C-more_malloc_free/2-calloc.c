#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array of
 * elements and initializes them to 0.
 * @nmemb: The number of elements in the array.
 * @size: The size in bytes of each element.
 *
 * Return: A pointer to the newly allocated memory,
 * or NULL if memory allocation fails,
 *         or if nmemb or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *calloc;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
calloc = malloc(nmemb * size);
if (calloc == NULL)
return (NULL);
for (i = 0; i < nmemb; i++)
calloc[i] = '\0';
return (calloc);
}
