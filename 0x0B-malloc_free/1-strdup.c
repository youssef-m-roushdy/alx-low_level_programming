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
int len = strlen(str);
int i = 0;
if (str == NULL)
return (NULL);
a = malloc((len + 1) * sizeof(char));
if (a == NULL)
return (NULL);
while (i < len)
{
a[i] = str[i];
i++;
}
a[i] = '\0';
return (a);
}
