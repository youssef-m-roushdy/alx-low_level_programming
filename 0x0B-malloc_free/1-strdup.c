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
int len, i = 0;
if (str == NULL)
return (NULL);
len = strlen(str) + 1;
a = malloc(len * sizeof(char));
if (a == NULL)
return (NULL);
while (str[i])
{
a[i] = str[i];
i++;
{
a[i] = '\0';
return (a);
}
