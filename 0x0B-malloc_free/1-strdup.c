#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Duplicates a string in memory.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly created duplicate string,
 * or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
char *a;
unsigned int len = strlen(str);
unsigned int i = 0;
a = malloc(len * sizeof(char));
if (str == NULL)
return (NULL);
while (i < len)
{
a[i] = str[i];
i++;
}
return (a);
}
