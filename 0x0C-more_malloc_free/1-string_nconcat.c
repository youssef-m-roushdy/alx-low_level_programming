#include <stdlib.h>
/**
 * string_nconcat - Concatenates the first n characters of two
 * strings into a new string.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 * @n: The number of characters from s2 to concatenate.
 *
 * Return: A pointer to the newly created concatenated string,
 * or NULL if memory allocation fails
 *         or if s1 or s2 is NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, lenc;
char *nconc;
lenc = n * 2;
if (s1 == NULL || s2 == NULL)
return (NULL);
nconc = malloc(lenc *sizeof(char));
if (nconc == NULL)
{
return (NULL);
}
for (i = 0; i < n; i++)
{
if (s1[i] == '\0')
break;
nconc[i] = s1[i];
}
for (j = 0; j < n; j++)
nconc[j + i] = s2[j];
nconc[j + i] = '\0';
return (nconc);
}
